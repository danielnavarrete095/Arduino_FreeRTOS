#include <Arduino_FreeRTOS.h>

#define LED_1 6
#define LED_2 7
#define LED_3 8

void setup() {
    xTaskCreate(led1ControllerTask, "LED 1 Task", 128, NULL, 1, NULL);
    xTaskCreate(led2ControllerTask, "LED 2 Task", 128, NULL, 1, NULL);
    xTaskCreate(led3ControllerTask, "LED 3 Task", 128, NULL, 1, NULL);
}
void led1ControllerTask(void *pvParameters) {
    pinMode(LED_1, OUTPUT);
    while(true) {
        digitalWrite(LED_1, digitalRead(LED_1)^1);
    }
}
void led2ControllerTask(void *pvParameters) {
    pinMode(LED_2, OUTPUT);
    while(true) {
        digitalWrite(LED_2, digitalRead(LED_2)^1);
    }
}
void led3ControllerTask(void *pvParameters) {
    pinMode(LED_3, OUTPUT);
    while(true) {
        digitalWrite(LED_3, digitalRead(LED_3)^1);
    }
}
void loop() {
}