#include "sw_uart.h"

due_sw_uart uart;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop() {
    digitalWrite(4,HIGH);
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,LOW);
    
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,HIGH); 
     
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,LOW);  
    
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");    
    digitalWrite(4,LOW);
    
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,LOW);
    
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,LOW);
    
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,LOW);
    
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,LOW);
    
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,LOW);

    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    digitalWrite(4,HIGH);
    for(int i = 0; i < 1093; i++)
      asm("NOP");
    for(int i = 0; i < 1093; i++)
      asm("NOP");
}
