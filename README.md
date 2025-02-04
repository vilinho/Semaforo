# Simulação de um semáforo no Rasperry Pi Pico W

## Introdução
Este repositório contém um programa em C desenvolvido para o Raspberry Pi Pico W, utilizando o Pico SDK. O código implementa:
- Semáforo (temporizador periódico) - Um sistema que altera automaticamente as cores de um semáforo a cada 3 segundos.

O código foi testado utilizando o simulador Wokwi e a ferramenta educacional BitDogLab.

## Funcionamento
- O código controla três LEDs que simulam um semáforo.
- O LED vermelho acende primeiro, seguido pelo amarelo e, por fim, pelo verde.
- A cada 3 segundos, a cor muda ciclicamente.
- No loop principal, uma mensagem é impressa a cada segundo para indicar o funcionamento do sistema.

Vídeo do resultado final na placa física: https://drive.google.com/file/d/1KS8rEzmwVnfgH3UltEQ2TpO_PKidYcFV/view?usp=sharing
