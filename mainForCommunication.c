//
// Created by Templier Bourda Tancrède on 27/01/2026.
//

#include "mainForCommunication.h"
#include <arduino.h>

unsigned long a;

void setup() {
    Serial.begin(9600);
    a = millis();
}

void loop() {
    if (a%1000 == 0) {
        Serial.println("Travail";
    }

}

