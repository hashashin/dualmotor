/** 
  *
  * Biblioteca DualMotor
  * @autor Marco Mello - Engenharia LdG
  * @acesse www.labdegaragem.com
  
  * modified to work with http://www.deek-robot.com/productshow.asp?id=17&small=4
  * by hashashin
  **/


#ifndef DualMotor_H
#define DualMotor_H


#include "Arduino.h"

class DualMotor 
{
public:

	DualMotor();

	void M1move(byte speed, bool sense);
	void M1stop();
	void M2move(byte speed, bool sense);
	void M2stop();
	
private:

	int pwmPinM1;
	int sensePinM1;
	int sense2PinM1;
	int pwmPinM2;
	int sensePinM2;
	int sense2PinM2;
};

#endif