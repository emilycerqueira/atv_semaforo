#include "pico/stdlib.h"
#include "hardware/timer.h"



volatile int estado = 0;

// Callback do temporizador
bool repeating_timer_callback(struct repeating_timer *t) {
    // Desliga todos os LEDs
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    // Ativa o LED correspondente ao estado atual
    switch (estado) {
        case 0:
            gpio_put(LED_VERMELHO, 1);
            printf("LED Vermelho ligado.\n");
            break;
        case 1:
            gpio_put(LED_AMARELO, 1);
            printf("LED Amarelo ligado.\n");
            break;
        case 2:
            gpio_put(LED_VERDE, 1);
            printf("LED Verde ligado.\n");
            break;
    }
    
    estado = (estado + 1) % 3; // Alterna entre 0, 1 e 2
    return true; 
}

int main() {
    stdio_init_all();

    gpio_init(LED_VERMELHO);
    gpio_init(LED_AMARELO);
    gpio_init(LED_VERDE);
    
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    while (true) {
        for (int i = 3; i > 0; i--) {
            printf("%d s...\n", i);
            sleep_ms(1000);
        }
    }
}