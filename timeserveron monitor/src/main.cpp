#include <WiFi.h>
#include "time.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

const char* ssid       = "Nikhil.BG.";
const char* password   = "Nikhilbg";

const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 19800;
const int   daylightOffset_sec = 19800;

Adafruit_SSD1306 display(-1);

void printLocalTime()
{
  struct tm timeinfo;
  if(!getLocalTime(&timeinfo)){
    display.println("Failed to obtain time");
    return;
  }
  display.clearDisplay();

	display.setTextSize(2);
	display.setTextColor(WHITE);
	display.setCursor(8,10);
	display.println(&timeinfo, "%I:%M:%S");
	display.display();
	display.clearDisplay();
 
}

void setup()
{

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  
display.clearDisplay();
	
  //connect to WiFi
  display.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      display.print(".");
  }
  display.println(" CONNECTED");
  
  //init and get the time
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  printLocalTime();

  //disconnect WiFi as it's no longer needed
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
}

void loop()
{
  delay(1000);
  printLocalTime();
}
