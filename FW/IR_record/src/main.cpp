#include <Arduino.h>
#include <IRLib2.h>

IRrecvPCI IRReceiver(2);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  IRReceiver.enableIRIn();
}

void loop()
{
  // put your main code here, to run repeatedly:
  if(IRReceiver.getResults())
  {
    Serial.println("\n\n--------------------------");
    Serial.println("Received IR Signal:");

    Serial.print("RAW DATA LENGTH = ");
    Serial.println(recvGlobal.recvLength, DEC);

    Serial.print(F("uint16_t rawData[DATA_LENGTH]={\n"));
    for(bufIndex_t i = 1; i < recvGlobal.recvLength; i++)
    {
      Serial.print(recvGlobal.recvBuffer[i], DEC);
      Serial.print(F(", "));

      if((i % 8) == 0)
      {
        Serial.print(F("\n"));
      }
    }
    
    Serial.println(F("4545};"));

    IRReceiver.enableIRIn();
  }

}