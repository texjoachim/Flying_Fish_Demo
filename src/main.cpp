// Demo flyingFishHelper

#include <Arduino.h>
#include <flyingFishHelper.h> // used to talk to the sensor module
                                // digital pin, analog pin

// the moisture sensor
flyingFish moistureSensor(3, A1);

void setup() {
    Serial.begin(9600);
    Serial.println("Flying Fish Helper Demo. Using a Moisture Sensor.");
}

void loop() {
    Serial.print("Digital reading: ");
    Serial.println(moistureSensor.digitalread());
    delay(1000);
    Serial.println();
    Serial.print("Analog reading: ");
    Serial.println(moistureSensor.analogread());
    delay(2000);
}