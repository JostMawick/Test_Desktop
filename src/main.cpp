#include <Arduino.h>
#include "display.h"
#include "moisture.h"
#include "wifi_connection.h"
#include "web_server.h"

void setup() {
    Serial.begin(115200);
    initDisplay();
    connectToWiFi();
    startWebServer();
}

void loop() {
    showText("Feuchtigkeit:   %");
    int moisture = readMoisture(); // Bodenfeuchtigkeit in Prozent auslesen
    showMoist_Value(moisture); // Bodenfeuchte am Display anzeigen
    updateMoistureValue(moisture); // Feuchtigkeitswert im Webserver aktualisieren
    delay(100);
}
