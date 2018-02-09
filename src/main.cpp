//
// Created by certug on 09.02.2018.
//
#include "Arduino.h"
#include "mylib.h"

void setup(){
    Serial.begin(115200);
    delay(100);
}


void loop(){
    Serial.println("test");
    mylib().test();
    delay(1000);
}