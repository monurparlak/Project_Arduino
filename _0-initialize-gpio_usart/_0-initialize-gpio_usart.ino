/* ************************************************************************************************************************
 * ************************************************************************************************************************
 * ARDUINO LIBRARY
 * By Mustafa Onur Parlak
 * GitHub Link: https://github.com/legarthos
 * ***********************************************************************************************************************/
/* ************************************************************************************************************************
 * Project Purpose:
 * It contains the basic notes and contents I took while learning ESP32 with ARDUINO DRIVER.
 * General Draft Code Style with Arduino Library
 *
 * ************************************************************************************************************************
 * Peripherals to be used:
 * GPIO (General Purpose Input Output)
 * USART (Universal Synchronous Asynchronous Receiver / Transmitter)
 * 
 * ************************************************************************************************************************
 * Update Time and Reason:
 * 2022.30.10 - Initialize
 *
 * ************************************************************************************************************************/
#include <Arduino.h>

#define GPIO_Pin 13

void setup() {
  pinMode(GPIO_Pin, OUTPUT);
  digitalWrite(GPIO_Pin, LOW);
  Serial.begin(9600);
  Serial.println("Initialize Test Func Starting..");
}

void loop() {
  digitalWrite(GPIO_Pin, HIGH);
  Serial.println("GPIO_Pin = HIGH/SET");
  delay(500); 
  
  digitalWrite(GPIO_Pin, LOW);
  Serial.println("GPIO_Pin = LOW/RESET");
  delay(500); 
}




