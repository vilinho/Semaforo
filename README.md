Visão Geral
Este repositório contém um programa escrito em C para o Raspberry Pi Pico W, utilizando o Pico SDK. O código simula um semáforo com as seguintes características:

Semáforo (com temporização periódica) - O sistema altera automaticamente as cores do semáforo a cada 3 segundos.
O código foi testado em ambiente de simulação com o Wokwi e a ferramenta educacional BitDogLab.

Como Funciona
O código gerencia três LEDs que representam as cores do semáforo.
O LED vermelho acende primeiro, seguido pelo amarelo e, em seguida, pelo verde.
A cada 3 segundos, a cor do semáforo muda de forma cíclica.
Durante o loop principal, uma mensagem é exibida a cada segundo, indicando o estado do sistema.

Link do resultado na Placa: https://drive.google.com/file/d/1MwEOnhRL4QAQo0199oZSYb61_GgdjKbb/view?usp=sharing
