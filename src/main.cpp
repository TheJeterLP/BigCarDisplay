#include <Arduino.h>
#include <helpers/setup.h>
#include <GUI/gui.h>

void setup()
{
    Serial.begin(115200);
    launchSetup();
    launchGui();
}

void loop()
{
    launchLoop();
}