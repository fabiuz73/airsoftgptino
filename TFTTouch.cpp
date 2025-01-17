#include "TFTTouch.h"
#include <TFT_eSPI.h>

// Dimensioni e posizioni dei pulsanti TFT
#define BUTTON_WIDTH  80
#define BUTTON_HEIGHT 60
#define BUTTON_PADDING 10
#define BUTTON_EXTRA_WIDTH  80
#define BUTTON_EXTRA_HEIGHT 50
#define KEYPAD_START_X 20
#define KEYPAD_START_Y 20
#define BUTTON_UP_X 400
#define BUTTON_UP_Y 20
#define BUTTON_DOWN_X 400
#define BUTTON_DOWN_Y 90
#define BUTTON_ENTER_X 400
#define BUTTON_ENTER_Y 160
#define BUTTON_RETURN_X 400
#define BUTTON_RETURN_Y 230

TFT_eSPI tft = TFT_eSPI();

void drawKeypad();
void drawButton(int x, int y, const char* label, int width, int height, uint16_t color);

void initTFTTouch() {
    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_BLACK);

    // Disegna tastierino e pulsanti extra
    drawKeypad();
    drawButton(BUTTON_UP_X, BUTTON_UP_Y, "UP", BUTTON_EXTRA_WIDTH, BUTTON_EXTRA_HEIGHT, TFT_GREEN);
    drawButton(BUTTON_DOWN_X, BUTTON_DOWN_Y, "DOWN", BUTTON_EXTRA_WIDTH, BUTTON_EXTRA_HEIGHT, TFT_RED);
    drawButton(BUTTON_ENTER_X, BUTTON_ENTER_Y, "ENTER", BUTTON_EXTRA_WIDTH, BUTTON_EXTRA_HEIGHT, TFT_BLUE);
    drawButton(BUTTON_RETURN_X, BUTTON_RETURN_Y, "RETURN", BUTTON_EXTRA_WIDTH, BUTTON_EXTRA_HEIGHT, TFT_YELLOW);
}

void updateTFTTouch() {
    uint16_t x, y;
    if (tft.getTouch(&x, &y)) {
        // Gestisci il tocco
        Serial.print("Touch at: ");
        Serial.print("X = ");
        Serial.print(x);
        Serial.print(", Y = ");
        Serial.println(y);
    }
}

void drawKeypad() {
    const char* labels[4][4] = {
        {"1", "2", "3", "A"},
        {"4", "5", "6", "B"},
        {"7", "8", "9", "C"},
        {"*", "0", "#", "D"}
    };

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            int x = KEYPAD_START_X + col * (BUTTON_WIDTH + BUTTON_PADDING);
            int y = KEYPAD_START_Y + row * (BUTTON_HEIGHT + BUTTON_PADDING);
            drawButton(x, y, labels[row][col], BUTTON_WIDTH, BUTTON_HEIGHT, TFT_BLUE);
        }
    }
}

void drawButton(int x, int y, const char* label, int width, int height, uint16_t color) {
    tft.fillRect(x, y, width, height, color);
    tft.drawRect(x, y, width, height, TFT_WHITE);
    tft.setTextColor(TFT_WHITE);
    tft.setTextSize(2);

    int text_x = x + (width - tft.textWidth(label)) / 2;
    int text_y = y + (height - 16) / 2;

    tft.setCursor(text_x, text_y);
    tft.print(label);
}
