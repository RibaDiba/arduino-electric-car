#include <WiFi.h>
#include <ArduinoOTA.h>
#include <TelnetStream.h>

// Wi-Fi credentials
const char* ssid = "NETGEAR21";
const char* password = "hungryraccoon528";

void setup() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected to WiFi");

  // Start Telnet
  TelnetStream.begin();

  // Setup OTA
  ArduinoOTA.begin();
}

void loop() {
  ArduinoOTA.handle();

  // Use TelnetStream instead of Serial
  TelnetStream.println("Debug log over Telnet");
  delay(1000);
}
