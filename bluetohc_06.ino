#include <SoftwareSerial.h>
SoftwareSerial BT1(4,2); // RX, TX recorder que se cruzan
int Led=13; 
void setup()
   {
       Serial.begin(9600);
       Serial.println("Enter AT commands:");
       BT1.begin(9600);
       pinMode(Led,OUTPUT);
       
   }

void loop()
   {
       if (BT1.available())
           Serial.write(BT1.read());


            if (BT1.available()) {
               char c = BT1.read(); 
                   if (c=='t') 
                           digitalWrite(Led, HIGH); 
                   if (c=='h') 
                           digitalWrite(Led, LOW); 
               Serial.println(c);            }
            
       
}

