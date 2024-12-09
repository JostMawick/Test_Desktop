#include <WiFi.h>
#include <WebServer.h>
#include "web_server.h"

WebServer server(80);
int currentMoisture = 0;

void handleRoot() {
    String html = "<html><head><meta http-equiv='refresh' content='5'></head><body><h1>Feuchtigkeit: " + String(currentMoisture) + "%</h1></body></html>";
    server.send(200, "text/html", html);
}

void startWebServer() {
    server.on("/", handleRoot);
    server.begin();
    Serial.println("HTTP server started");
}

void updateMoistureValue(int moisture) {
    currentMoisture = moisture;
    server.handleClient();
}