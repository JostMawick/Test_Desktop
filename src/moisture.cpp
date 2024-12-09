#include "moisture.h"
#include <Arduino.h>

// Definiere den Pin für den Sensor
#define MOISTURE_SENSOR_PIN 34

// Definiere Kalibrierungswerte (diese Werte kannst du anpassen)
#define DRY_VALUE 2600   // Sensorwert bei komplett trockenem Boden
#define WET_VALUE 930      // Sensorwert bei vollständig nassem Boden

// Initialisiert den Bodenfeuchtigkeitssensor
void initMoistureSensor() {
    pinMode(MOISTURE_SENSOR_PIN, INPUT); // Pin als Eingang setzen
}

// Liest den Feuchtigkeitswert vom Sensor
int readMoisture() {
    // Rohwert auslesen
    int rawValue = analogRead(MOISTURE_SENSOR_PIN);

    // Sensorwert in Prozent umrechnen (0% = trocken, 100% = nass)
    int moisturePercent = map(rawValue, DRY_VALUE, WET_VALUE, 0, 100);

    // Werte auf die Grenze [0, 100] begrenzen
    moisturePercent = constrain(moisturePercent, 0, 100);

    return moisturePercent;
}
