#include "DisplayI2C.h"
#include "TFTTouch.h"
#include "Logic.h"
#include "BuzzerRGB.h"

void setup() {
    Serial.begin(9600);
    initDisplayI2C();
    initTFTTouch();
    initLogic();
    initBuzzerRGB();
}

void loop() {
    updateTFTTouch();
    updateLogic();
    updateBuzzerRGB();
}
