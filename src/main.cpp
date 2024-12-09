#include <Arduino.h>
#include "display.h"
#include "moisture.h"

void setup() {
    Serial.begin(115200);
    initDisplay();
}

void loop() {
    showText("Feuchtigkeit:   %");
    int moisture = readMoisture(); // Bodenfeuchtigkeit in Prozent auslesen
    showMoist_Value(moisture); // Bodenfeuchte am Display anzeigen
    //drawGrid();
    delay(100);
}


   
