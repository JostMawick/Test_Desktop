#include <Arduino.h>
#include "display.h"
#include "moisture.h"
#include "blynk_connection.h"

void setup() {
    Serial.begin(115200);
    initDisplay();
    showText("Bodenfeuchte");
}

void loop() {
    showText("Feuchtigkeit:   %");
    int moisture = readMoisture(); // Bodenfeuchtigkeit in Prozent auslesen
    showMoist_Value(moisture); // Bodenfeuchte am Display anzeigen
   // sendMoistureToBlynk(moisture); // Bodenfeuchte an Blynk senden
    delay(100);
}


   
