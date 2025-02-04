#include <stdio.h>
#include "pico/stdlib.h"   
#include "hardware/timer.h" 

#define PINO_LED_VERMELHO 13
#define PINO_LED_AMARELO 12
#define PINO_LED_VERDE 11

// Variável global para controlar o estado do LED e a cor atual.
int estado_led = 0;

// Função de callback que será chamada repetidamente pelo temporizador
bool repeating_timer_callback(struct repeating_timer *t) {
    // Atualiza a cor do LED com base no estado atual
    if (estado_led == 0) {
        gpio_put(PINO_LED_AMARELO, false);
        gpio_put(PINO_LED_VERDE, false);
        gpio_put(PINO_LED_VERMELHO, true);
        printf("PARE!  (Vermelho)\n");
    } else if (estado_led == 1) {
        gpio_put(PINO_LED_AMARELO, true);
        gpio_put(PINO_LED_VERDE, false);
        gpio_put(PINO_LED_VERMELHO, false);
        printf("ATENÇÃO!  (Amarelo)\n");
    } else {
        gpio_put(PINO_LED_AMARELO, false);
        gpio_put(PINO_LED_VERDE, true);
        gpio_put(PINO_LED_VERMELHO, false);
        printf("SIGA!  (Verde)\n");
    }

    // Atualiza o estado do LED para a próxima cor
    estado_led = (estado_led + 1) % 3;

    // Retorna true para manter o temporizador repetindo. Se retornar false, o temporizador para.
    return true;
}

int main() {
    // Inicializa a comunicação serial
    stdio_init_all();

    // Inicializa os pinos GPIO dos LEDs
    gpio_init(PINO_LED_AMARELO);
    gpio_set_dir(PINO_LED_AMARELO, true);
    gpio_init(PINO_LED_VERDE);
    gpio_set_dir(PINO_LED_VERDE, true);
    gpio_init(PINO_LED_VERMELHO);
    gpio_set_dir(PINO_LED_VERMELHO, true);

    struct repeating_timer timer;

    // Configura o temporizador para chamar a função de callback a cada 3 segundos.
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    // Loop principal imprimindo mensagem a cada 1 segundo
    while (true) {
        printf("Sistema operacional: aguardando mudança de sinal...\n");
        sleep_ms(1000);
    }

    return 0;
}
