#include <Adafruit_SSD1306.h>
#include <Wire.h>
#include <Arduino.h>
#include "moisture.h"


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

void initDisplay() {
}

void showText(const char* message) {
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setTextSize(1);
    display.setCursor(10, 0);
    display.setCursor(0, 0);
    display.println(message);
    display.display();
}

/*void showMoist_Value(int m_Value){
    display.clearDisplay();
void showMoist_Value(int m_Value){
    display.fillRect(80, 0, 12, 8, BLACK); // Rechteck über den alten Wert malen


    display.setTextColor(WHITE);
    display.setTextSize(1);
    display.setCursor(10, 1);
    display.setCursor(80, 0);
    display.println(m_Value);
    display.display();
}
*/
void drawGrid() {
    for (int x = 0; x < display.width(); x += 10) {
        display.drawLine(x, 0, x, display.height(), WHITE); // Vertikale Linien
    }
    for (int y = 0; y < display.height(); y += 10) {
        display.drawLine(0, y, display.width(), y, WHITE); // Horizontale Linien
    }
    display.display();
}