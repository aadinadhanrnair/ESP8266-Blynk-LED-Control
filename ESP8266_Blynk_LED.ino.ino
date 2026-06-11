#define BLYNK_TEMPLATE_ID "TMPL6T92wjryx"
#define BLYNK_TEMPLATE_NAME "1st template"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_TOKEN"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// WiFi credentials
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

#define LED_PIN 2   // D4 (built-in LED, active LOW)

BLYNK_WRITE(V0)
{
  int state = param.asInt();

  digitalWrite(LED_PIN, state ? LOW : HIGH);

  Serial.print("LED State: ");
  Serial.println(state ? "ON" : "OFF");
}

void setup()
{
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // OFF initially

  Serial.println("Connecting to Blynk...");

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Connected!");
}

void loop()
{
  Blynk.run();
}