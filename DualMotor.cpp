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
	pwmPinM1=5;
    sentidoPinM1=7;
	sentido2PinM1=8;
	pwmPinM2=6;
	sentidoPinM2=9;
	sentido2PinM2=10;
	 
	pinMode(pwmPinM1, OUTPUT);
	pinMode(pwmPinM2, OUTPUT);
	pinMode(sentidoPinM1, OUTPUT);
	pinMode(sentido2PinM1, OUTPUT);
	pinMode(sentidoPinM2, OUTPUT);
	pinMode(sentido2PinM2, OUTPUT);
}

void DualMotor::M1move(int velocidade, int sentido)
{
	analogWrite(pwmPinM1, velocidade);
	if (sentido == 0)
	{
		digitalWrite(sentidoPinM1, HIGH);
		digitalWrite(sentido2PinM1, LOW);
	}
	else 
	{
		digitalWrite(sentidoPinM1, LOW);
		digitalWrite(sentido2PinM1, HIGH);
	}	
}

void DualMotor::M1stop()
{
    analogWrite(pwmPinM1, 0);
}

void DualMotor::M2move(int velocidade, int sentido)
{
	analogWrite(pwmPinM2, velocidade);
    if (sentido == 0)
	{
		digitalWrite(sentidoPinM2, HIGH);
		digitalWrite(sentido2PinM2, LOW);
	}
	else 
	{
		digitalWrite(sentidoPinM2, LOW);
		digitalWrite(sentido2PinM2, HIGH);
	}
}

void DualMotor::M2stop()
{
    analogWrite(pwmPinM2, 0);
}