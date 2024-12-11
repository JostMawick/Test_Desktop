#include <BlynkSimpleEsp32.h>
#include "blynk_connection.h"

// Blynk Auth Token
char auth[] = "r6H32lAHB1IvYpnlyNM9HOtG-pVsXnTv";

// Blynk Virtual Pin
#define VIRTUAL_PIN V1
const char* ssid = "Vodafone-5A3C";
const char* password = "GCHdcEh7DgbMNE83";

void initBlynk() {
    Blynk.begin(auth, ssid, password);
}

void sendMoistureToBlynk(int moisture) {
    Blynk.virtualWrite(VIRTUAL_PIN, moisture);
    Blynk.run();
}