#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(-1);

void setup()   
{                
	// initialize with the I2C addr 0x3C
	display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

	// Clear the buffer.
	display.clearDisplay();

	// Display Text
	display.setTextSize(2);
	display.setTextColor(BLACK,WHITE);
	display.setCursor(15,10);
	display.println("DHOST!");
	display.display();
	delay(2000);
  display.startscrollright(0x00, 0x07);
	//display.clearDisplay();

  // Scroll part of the screen
	// display.setCursor(8,10);
	// display.setTextSize(1);
	// //display.println( "DEATH IS ENABLE!");
	// // display.println("some part");
	// // display.println("of the screen.");
	// display.display();
	
}
void loop()
{

}