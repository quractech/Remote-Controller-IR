#include <Arduino.h>
#include <IRLib2.h>
#include <IRLibSendBase.h>
#include <IRLib_HashRaw.h>
#include <ir_codes.h>

// void increament(void);

IRsendRaw IRSender;

// const byte interruptPin = 2;
// uint8_t pressCounter = 0;
// uint8_t changeChannel = 0;

void setup() {
  // put your setup code here, to run once:
  // pinMode(interruptPin, INPUT_PULLUP);
  // attachInterrupt(digitalPinToInterrupt(interruptPin), increament, FALLING);
  Serial.begin(9600);
  Serial.println("IR Receiver Ready");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  /*ON OFF test*/
  delay(10000);
  Serial.println("ON");
  IRSender.send(rawData_ON_OFF,DATA_LENGTH,38);
  
  delay(10000);
  Serial.println("OFF");
  IRSender.send(rawData_ON_OFF,DATA_LENGTH,38);

  /*Send keys 1, 2, 3, 4, and 5*/

  /*if(changeChannel==1)
  {
    switch (pressCounter)
    {
      case 1:
        IRSender.send(rawData_ONE,DATA_LENGTH,38);
        delay(10);
        IRSender.send(rawData_OK,DATA_LENGTH,38);
        Serial.println("Change to Ch. 1");
        break;

      case 2:
        IRSender.send(rawData_TWO,DATA_LENGTH,38);
        delay(10);
        IRSender.send(rawData_OK,DATA_LENGTH,38);
        Serial.println("Change to Ch. 2");
        break;

      case 3:
        IRSender.send(rawData_THREE,DATA_LENGTH,38);
        delay(10);
        IRSender.send(rawData_OK,DATA_LENGTH,38);
        Serial.println("Change to Ch. 3");
        break;

      case 4:
        IRSender.send(rawData_FOUR,DATA_LENGTH,38);
        delay(10);
        IRSender.send(rawData_OK,DATA_LENGTH,38);
        Serial.println("Change to Ch. 4");
        break;

      case 5:
        IRSender.send(rawData_FIVE,DATA_LENGTH,38);
        delay(10);
        IRSender.send(rawData_OK,DATA_LENGTH,38);
        Serial.println("Change to Ch. 5");
        break;
    }
    changeChannel = 0;
  }*/

}

// void increament(void)
// {
//   pressCounter++;
//   changeChannel = 1;

//   if(pressCounter>5)
//   {
//     pressCounter = 1;
//   }
// }