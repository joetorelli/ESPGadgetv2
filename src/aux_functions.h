#include <Arduino.h>
#include "settings.h"

void wifiStatus(TFT_eSPI *tft,
                AdafruitIO_WiFi *AdaIO);

const char *wl_status_to_string(wl_status_t status);

void DisplayTheCount(TFT_eSPI *tft);
