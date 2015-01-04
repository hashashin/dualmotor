/** 
  *
  * Biblioteca DualMotor
  * @autor Marco Mello - Engenharia LdG
  * @acesse www.labdegaragem.com
  
  * modified to work with http://www.deek-robot.com/productshow.asp?id=17&small=4
  * by hashashin
  **/

  
#include "DualMotor.h"
#include "Arduino.h"

DualMotor::DualMotor()
{
	pwmPinM1=3;
	sensePinM1=5;
	sense2PinM1=6;
	pwmPinM2=11;
	sensePinM2=7;
	sense2PinM2=8;
	 
	pinMode(pwmPinM1, OUTPUT);
	pinMode(pwmPinM2, OUTPUT);
	pinMode(sensePinM1, OUTPUT);
	pinMode(sense2PinM1, OUTPUT);
	pinMode(sensePinM2, OUTPUT);
	pinMode(sense2PinM2, OUTPUT);
}

void DualMotor::M1move(byte speed, bool sense)
{
	analogWrite(pwmPinM1, speed);
	if (!sense)
	{
		digitalWrite(sensePinM1, HIGH);
		digitalWrite(sense2PinM1, LOW);
	}
	else if (sense)
	{
		digitalWrite(sensePinM1, LOW);
		digitalWrite(sense2PinM1, HIGH);
	}	
}

void DualMotor::M1stop()
{
	analogWrite(pwmPinM1, 0);
}

void DualMotor::M2move(byte speed, bool sense)
{
	analogWrite(pwmPinM2, speed);
	if (!sense)
	{
		digitalWrite(sensePinM2, HIGH);
		digitalWrite(sense2PinM2, LOW);
	}
	else if (sense)
	{
		digitalWrite(sensePinM2, LOW);
		digitalWrite(sense2PinM2, HIGH);
	}
}

void DualMotor::M2stop()
{
	analogWrite(pwmPinM2, 0);
}