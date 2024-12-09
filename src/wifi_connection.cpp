#include <WiFi.h>
#include "wifi_connection.h"

const char* ssid = "Vodafone-5A3C";
const char* password = "GCHdcEh7DgbMNE83";

void connectToWiFi() {
    Serial.begin(115200);
    delay(10);

    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}