#define LED_1 6
#define LED_2 7
#define LED_3 8

void setup() {
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);
    pinMode(LED_3, OUTPUT);
}

void loop() {
    digitalWrite(LED_1, digitalRead(LED_1)^1);
    digitalWrite(LED_2, digitalRead(LED_2)^1);
    digitalWrite(LED_3, digitalRead(LED_3)^1);
    delay(500);
}