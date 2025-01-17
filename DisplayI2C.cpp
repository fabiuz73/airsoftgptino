#include "I2CDisplay.h"
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void initI2CDisplay() {
    lcd.init();
    lcd.backlight();
    lcd.clear(); // Pulisce lo schermo all'avvio
    lcd.setCursor(0, 0);
    lcd.print("I2C Display Ready");
}

void updateI2CDisplay(const char* line1, const char* line2, const char* line3, const char* line4) {
    lcd.setCursor(0, 0);
    lcd.print("                    "); // Pulisce la riga
    lcd.setCursor(0, 0);
    lcd.print(line1);

    lcd.setCursor(0, 1);
    lcd.print("                    ");
    lcd.setCursor(0, 1);
    lcd.print(line2);

    lcd.setCursor(0, 2);
    lcd.print("                    ");
    lcd.setCursor(0, 2);
    lcd.print(line3);

    lcd.setCursor(0, 3);
    lcd.print("                    ");
    lcd.setCursor(0, 3);
    lcd.print(line4);
}
