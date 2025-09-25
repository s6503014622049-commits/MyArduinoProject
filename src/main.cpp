#include <Arduino.h>

void setup() {
    Serial.begin(9600);  // เริ่ม serial communication
    Serial.println("Hello PlatformIO!");
}

void loop() {
    Serial.println("Arduino is running...");
    delay(1000);  // หน่วงเวลา 1 วินาที
}

// test