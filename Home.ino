#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Oj8d9UcS1c_-qEzYSniRl_C0xdvM2FFb";
char ssid[] = "Ucare";
char pass[] = "06112000";
                              
const int R1  = 14;            // Output Relay 1 GPI0 14 (D5)
const int R2  = 13;            // Output Relay 2 GPI0 13 (D6)
const int R3  = 12;            // Output Relay 1 GPI0 13 (D7)
const int R4  = 15;            // Output Relay 2 GPI0 15 (D8)

void setup()
{
   Serial.begin(13500);
  Blynk.begin(auth, ssid, pass,"sv.bangthong.com", 8080);   

  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(R3,OUTPUT);
  pinMode(R4,OUTPUT);
}

void loop()
{
  Blynk.run();
}
