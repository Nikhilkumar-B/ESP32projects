#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
//#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define bitmap_height   128
#define bitmap_width    64
void showBitmap();
static const unsigned char PROGMEM bitmap[] =
{

// 'IMG-20190902-WA0015', 128x80px
0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0xfe, 0x7d, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x03, 0xff, 0xff, 0xfe, 0x0f, 0xf9, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 
0xff, 0xc0, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xe0, 0xfc, 0x01, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 
0xff, 0xc0, 0x07, 0xff, 0xff, 0xf0, 0x03, 0xf7, 0x6c, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 
0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 
0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 
0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0x79, 0xff, 0xf8, 0xef, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 
0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xf9, 0xcf, 0xb9, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 0xff, 
0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 0xff, 
0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x03, 0xff, 
0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xf9, 0xfd, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x03, 0xff, 
0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xf9, 0xfd, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xf9, 0xfd, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x3f, 0xff, 0xff, 0xc7, 0xf9, 0x3d, 0xf4, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0xdb, 0xfb, 0x3d, 0xe6, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0x9f, 0xf3, 0x3d, 0xe3, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0xbf, 0xf7, 0x3d, 0xe3, 0x9f, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0xbf, 0xef, 0x3d, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0x3f, 0xef, 0xbd, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0x3f, 0xff, 0xbd, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0xff, 0xff, 0xff, 0x3b, 0xff, 0xbe, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x9e, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0xff, 0xff, 0xff, 0xbf, 0xf7, 0x9e, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0xff, 0xff, 0xff, 0x9f, 0xf7, 0xdf, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0xff, 0xff, 0xff, 0x9e, 0xf7, 0xcf, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0xff, 0xff, 0xff, 0xc1, 0xf3, 0xef, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 0xf3, 0xe7, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf7, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0xf8, 0xfb, 0xfb, 0xde, 0xf9, 0xef, 0xff, 0xff, 0xfe, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0xf3, 0x79, 0xfd, 0xee, 0x7e, 0x1f, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0xef, 0xf9, 0xfe, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0xef, 0xfc, 0xff, 0x3f, 0x9f, 0x3f, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x7f, 0xff, 0xff, 0xcf, 0xfc, 0x7f, 0x9f, 0xdc, 0x8f, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x3f, 0xff, 0xff, 0xcf, 0xfe, 0x3f, 0xef, 0xcb, 0xe7, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x3f, 0xff, 0xff, 0xcf, 0xff, 0x0f, 0xf7, 0xef, 0xf7, 0xff, 0xff, 0xfc, 0x03, 0xff, 
0xff, 0xc0, 0x3f, 0xff, 0xff, 0xcf, 0xff, 0xc1, 0xff, 0xef, 0xf3, 0xff, 0xff, 0xf8, 0x03, 0xff, 
0xff, 0xc0, 0x1f, 0xff, 0xff, 0xef, 0xff, 0xe0, 0x05, 0xf7, 0xf3, 0xff, 0xff, 0xf8, 0x03, 0xff, 
0xff, 0xc0, 0x1f, 0xff, 0xff, 0xed, 0xff, 0xfc, 0x07, 0xf7, 0xf3, 0xff, 0xff, 0xf8, 0x03, 0xff, 
0xff, 0xc0, 0x1f, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xfe, 0xf7, 0xf7, 0xff, 0xff, 0xf0, 0x03, 0xff, 
0xff, 0xc0, 0x1f, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xf0, 0x03, 0xff, 
0xff, 0xc0, 0x0f, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xef, 0xe7, 0xff, 0xff, 0xf0, 0x03, 0xff, 
0xff, 0xc0, 0x0f, 0xff, 0xff, 0xf8, 0xff, 0xfc, 0x63, 0xff, 0xcf, 0xff, 0xff, 0xe0, 0x03, 0xff, 
0xff, 0xc0, 0x0f, 0xff, 0xff, 0xfe, 0x7f, 0xf9, 0xf3, 0xdf, 0x9f, 0xff, 0xff, 0xe0, 0x03, 0xff, 
0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x1f, 0xe3, 0xf9, 0xbf, 0x3f, 0xff, 0xff, 0xe0, 0x03, 0xff, 
0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0xf9, 0xfc, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 
0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xef, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 
0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 
0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xfb, 0xfb, 0xfe, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x00, 0x0e, 0x02, 0x72, 0x07, 0x80, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x11, 0x6e, 0xa0, 0xe6, 0x4f, 0xbb, 0x8b, 0x60, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x02, 0x6e, 0x29, 0xae, 0x5b, 0xbb, 0x03, 0x40, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x00, 0x06, 0x11, 0xaa, 0x5b, 0xea, 0x40, 0x43, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x15, 0x26, 0x7f, 0xff, 0x7f, 0xff, 0xff, 0xc6, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x36, 0x6d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x07, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff
};

void setup() {
  Serial.begin(9600);
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }
   display.clearDisplay();
   display.display();
}
 void loop(){
  showBitmap();
}
void showBitmap(void) {
  display.clearDisplay();
  display.drawBitmap(0, 0, bitmap, bitmap_height, bitmap_width, WHITE);
  display.display();
  delay(1000);
}

