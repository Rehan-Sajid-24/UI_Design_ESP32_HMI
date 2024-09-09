/**************************CrowPanel ESP32 HMI Display Example Code************************
Version     :	1.1
Suitable for:	CrowPanel ESP32 HMI Display
Product link:	https://www.elecrow.com/esp32-display-series-hmi-touch-screen.html
Code	  link:	https://github.com/Elecrow-RD/CrowPanel-ESP32-Display-Course-File
Lesson	link:	https://www.youtube.com/watch?v=WHfPH-Kr9XU
Description	:	The code is currently available based on the course on YouTube, 
				        if you have any questions, please refer to the course video: Introduction 
				        to ask questions or feedback.
**************************************************************/


#define MOSI_PIN 32
#define MISO_PIN 39
#define CLK_PIN  25
#define CS_PIN   33

#include <XPT2046_Bitbang.h>

#include <Wire.h>
#include <SPI.h>

XPT2046_Bitbang touchscreen(MOSI_PIN, MISO_PIN, CLK_PIN, CS_PIN);


/*******************************************************************************
   Config the display driver and touch pin in User_Setup.h
 ******************************************************************************/
#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI(); 

void setup()
{
  Serial.begin(9600);

  //Display Prepare
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextSize(5);
  delay(100);

  // Initialize the touchscreen
  touchscreen.begin();

  tft.fillScreen(TFT_BLUE);
  delay(1000);
  tft.fillScreen(TFT_YELLOW);
  delay(1000);
  tft.fillScreen(TFT_GREEN);
  delay(1000);
  tft.fillScreen(TFT_WHITE);
  delay(1000);
  tft.fillScreen(TFT_BLACK);
}

void loop()
{
  TouchPoint touch = touchscreen.getTouch();
  // Display touches that have a pressure value (Z)
  if( touch.zRaw != 0 )
  {
    tft.fillCircle(touch.x, touch.y, 5, TFT_WHITE);
    Serial.print( "Data x " );
    Serial.println( touch.x );

    Serial.print( "Data y " );
    Serial.println( touch.y );
  }
}
