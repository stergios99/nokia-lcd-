#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544( 5, 4, 3);

void setup() {
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH); //Turn Backlight ON
  Serial.begin(9600);
  display.begin();     
}

void loop() {
   display.clearDisplay(); 
   display.setTextSize(0.1);
   display.setCursor(0, 0);
   display.print(""); //TEXT
   display.print();    //INT OR FLOAT ..
   display.setCursor(0, 10); //NEXT LINE
   display.print(""); //TEXT
   display.print();   //INT OR FLOAT ..

    display.display(); 
      
 
  //  display.drawFastHLine(0,10,83,BLACK); //LINE 
     

  }
  
 
