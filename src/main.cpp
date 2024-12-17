#include <Arduino.h>
#include "display.h"
#include "moisture.h"

void setup() {
    Serial.begin(115200);
    initDisplay();
    showText("Feuchte");
}

void loop() {
    showText("Feuchtigkeit:   %");
    int moisture = readMoisture(); // Bodenfeuchtigkeit in Prozent auslesen
     //showMoist_Value(moisture);
delay(500);
    delay(1000); 

    delay(700);
    showMoist_Value(moisture); // Bodenfeuchte am Display anzeigen
    //drawGrid();
    delay(100);
}