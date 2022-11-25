// #include < Wire .h> we are removing this because it is already added in liquid crystal library
#include <WiFi.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <LiquidCrystal_I2C.h>
//    Can be client or even host   //
#ifndef STASSID
#define STASSID "Deadpool2"  // Replace with your network credentials
#define STAPSK  "12345qwet"  
#endif


 
// Create the lcd object address 0x3F and 16 columns x 2 rows 
LiquidCrystal_I2C lcd (0x27, 16,2);  //
 
 const char* ssid = STASSID;
const char* password = STAPSK;

void  setup () {
   // Initialize the LCD connected 
  lcd. init ();
  
  // Turn on the backlight on LCD. 
  lcd. backlight ();
  
  // print the Message on the LCD. 
  lcd. print ( "HI" );
}
 
void  loop () {
    //Here cursor is placed on first position (col: 0) of the second line (row: 1) 
  lcd. setCursor (0, 1);
   // We write the number of seconds elapsed 
  lcd. print ( millis () / 1000);
  lcd. print ( "Rahul raj" );
  delay (100);
}
