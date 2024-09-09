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

/**************************Touch_screen_Config_Lib************************/
#include <XPT2046_Bitbang.h>

#define XPT2046_IRQ 36
#define XPT2046_MOSI 32
#define XPT2046_MISO 39
#define XPT2046_CLK 25
#define XPT2046_CS 33

XPT2046_Bitbang ts(XPT2046_MOSI, XPT2046_MISO, XPT2046_CLK, XPT2046_CS);

#include <TFT_eSPI.h>
/**************************TFT_eSPI************************
If you don't know how to configure TFT_eSPI library for the display and touch driver
Please refer to the content of the fifth lesson
**************************************************************/
#include <Arduino.h>
#include <SPI.h>

/**************************LVGL and UI************************
if you want to use the LVGL demo. you need to include <demos/lv_demos.h> and <examples/lv_examples.h>. 
if not, please do not include it. It will waste your Flash space.
**************************************************************/
#include <lvgl.h>
#include "ui.h"

/**************************LVGL and UI END************************/

/**************************DHT library************************/
#include <DHT.h>

//Constants
#define DHTPIN 22  // what pin we're connected to
#define DHTTYPE DHT11  // DHT 11

DHT dht(DHTPIN, DHTTYPE);  //// Initialize DHT sensor for normal 16mhz Arduino

//Variables
float tem_float = 0;
float hum_float = 0;

/*******************************************************************************
 * Please define the corresponding macros based on the board you have purchased.
 * CrowPanel_24 means CrowPanel ESP32 HMI 2.4inch Board
 * CrowPanel_28 means CrowPanel ESP32 HMI 2.8inch Board
 * CrowPanel_35 means CrowPanel ESP32 HMI 3.5inch Board
 ******************************************************************************/
//#define CrowPanel_24
#define CrowPanel_28
//#define CrowPanel_35

#if defined (CrowPanel_35)
/*screen resolution*/
static const uint16_t screenWidth  = 480;
static const uint16_t screenHeight = 320;
uint16_t calData[5] = { 353, 3568, 269, 3491, 7  };     /*touch caldata*/

#elif defined (CrowPanel_24)
static const uint16_t screenWidth  = 320;
static const uint16_t screenHeight = 240;
uint16_t calData[5] = { 557, 3263, 369, 3493, 3  };

#elif defined (CrowPanel_28)
static const uint16_t screenWidth  = 320;
static const uint16_t screenHeight = 240;
uint16_t calData[5] = { 189, 3416, 359, 3439, 1 };
#endif


TFT_eSPI lcd = TFT_eSPI(); /* TFT entity */

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf1[ screenWidth * screenHeight / 13 ];

//_______________________
/* display flash */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
  uint32_t w = ( area->x2 - area->x1 + 1 );
  uint32_t h = ( area->y2 - area->y1 + 1 );

  lcd.startWrite();
  lcd.setAddrWindow( area->x1, area->y1, w, h );
  lcd.pushColors( ( uint16_t * )&color_p->full, w * h, true );
  lcd.endWrite();

  lv_disp_flush_ready( disp );
}

/*touch read*/
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
  
  TouchPoint touch = ts.getTouch();
  if ( touch.zRaw == 0 )
  {
      data->state = LV_INDEV_STATE_REL;
  }
  else
  {
     data->state = LV_INDEV_STATE_PR;

    /*set location*/
    data->point.x = touch.x;
    data->point.y = touch.y;

    Serial.print( "Data x " );
    Serial.println( touch.x );

    Serial.print( "Data y " );
    Serial.println( touch.y );
  }
  
  delay(100);  // Adjust delay as needed for responsiveness vs. serial output frequency
}

void setup()
{
  Serial.begin( 9600 ); /*serial init */

  //Port_D
  pinMode(25, OUTPUT);
  digitalWrite(25, LOW);

  //LCD init
  lcd.begin();          
  lcd.setRotation(1); 
  lcd.fillScreen(TFT_BLACK);
  lcd.setTouch(calData);
  delay(100);
  //background light pin
  pinMode(21, OUTPUT);
  digitalWrite(21, HIGH);

  
  /* DHT begin Function */
  dht.begin(); 

  //lvgl init
  lv_init();
  
  lv_disp_draw_buf_init( &draw_buf, buf1, NULL, screenWidth * screenHeight / 13 );

  // Start the SPI for the touch screen and init the TS library
  ts.begin();

  /* Initialize the display */
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init( &disp_drv );
  /* Change the following line to your display resolution */
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register( &disp_drv );

  /* Initialize the (dummy) input device driver */
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init( &indev_drv );
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register( &indev_drv );

  lcd.fillScreen(TFT_BLACK);

  ui_init();

  lv_timer_t * timer = lv_timer_create(my_timer, 1000,  NULL);
  
  Serial.println( "Setup done" );
}

void my_timer(lv_timer_t * timer)
{
    // Read temperature and humidity
    float temperature = dht.readTemperature(); // Celsius
    float humidity = dht.readHumidity(); // Humidity in %

    // Check if readings are valid
    if (isnan(temperature) || isnan(humidity)) {
      Serial.println("Failed to read from DHT sensor!");
      lv_label_set_text(ui_temp, "Error: Temperature");
      lv_label_set_text(ui_Humi, "Error: Humidity");
      return;
    }

    // Allocate memory for temperature and humidity strings
    char *tem = (char *)malloc(24);
    char *hum = (char *)malloc(24);

    // Format the temperature and humidity strings
    sprintf(tem, "Temperature: %.2f C", temperature);
    lv_label_set_text(ui_temp, tem);

    sprintf(hum, "Humidity: %.2f %%RH", humidity);
    lv_label_set_text(ui_Humi, hum);

    // Update chart with new values
    lv_chart_set_next_value(ui_temp_and_Humi_Chart, ui_temp_and_Humi_Chart_series_1, temperature);
    lv_chart_set_next_value(ui_temp_and_Humi_Chart, ui_temp_and_Humi_Chart_series_2, humidity);
    lv_chart_refresh(ui_temp_and_Humi_Chart);

    // Free allocated memory
    free(tem);
    free(hum);
}

void loop()
{
  lv_timer_handler();
  delay(5);
}
