#include <Arduino.h>
#include "wifi_connection.h"
#include "web_server.h"
#include "blynk_connection.h"

void setup() {
    Serial.begin(115200);
    connectToWiFi();
    initBlynk();
    startWebServer();
}

void loop() {
    int moisture = analogRead(34); // Beispiel für das Auslesen des Feuchtigkeitswerts
    updateMoistureValue(moisture);
    sendMoistureToBlynk(moisture); // Feuchtigkeitswert an Blynk senden
    delay(1000);
}
