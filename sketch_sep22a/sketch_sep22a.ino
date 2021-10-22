#include "sw_uart.h"

due_sw_uart uart;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop() {
    digitalWrite(4,HIGH);
    delay(2000);
    digitalWrite(4,LOW);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
    //bit 8    
    digitalWrite(4,HIGH);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
     //bit 7     
    digitalWrite(4,HIGH);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
     //bit 6        
    digitalWrite(4,HIGH);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
     //bit 5     
    digitalWrite(4,HIGH);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
    //bit 4      
    digitalWrite(4,HIGH);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
    //bit 3       
    digitalWrite(4,HIGH);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
     //bit 2      
    digitalWrite(4,LOW);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
    //bit 1  
    digitalWrite(4,LOW);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
//paridade      
    digitalWrite(4,LOW);
    for(int i = 0; i < 2186; i++)
    {
      asm("NOP");
    }
}
