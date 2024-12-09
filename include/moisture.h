#ifndef MOISTURE_H
#define MOISTURE_H

// Initialisiert den Bodenfeuchtigkeitssensor
void initMoistureSensor();

// Liest den Feuchtigkeitswert vom Sensor (gibt Prozentwert zurück)
int readMoisture();

#endif
