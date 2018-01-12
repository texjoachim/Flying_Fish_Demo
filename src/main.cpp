// Demo flyingFishHelper

#include <Arduino.h>
#include <flyingFishHelper.h> // used to talk to the sensor module
                                // digital pin, analog pin

// the moisture sensor
flyingFish moistureSensor(3, A1);
flyingFish rainSensor(4, A2);

void setup() {
    Serial.begin(9600);
    Serial.println("Flying Fish Helper Demo. Using a Moisture Sensor and a rain sensor");
}

void loop() {
    Serial.println("MOISTURE SENSOR");
    Serial.print("Digital reading: ");
    Serial.println(moistureSensor.digitalread());
    delay(1000);
    Serial.println();
    Serial.print("Analog reading: ");
    Serial.println(moistureSensor.analogread());
    Serial.println("RAIN SENSOR");
    Serial.print("Digital reading: ");
    Serial.println(rainSensor.digitalread());
    delay(1000);
    Serial.println();
    Serial.print("Analog reading: ");
    Serial.println(rainSensor.analogread());
    delay(2000);
}