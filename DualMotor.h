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

    void M1move(int velocidade, int sentido);
    void M1stop();
    void M2move(int velocidade, int sentido);
    void M2stop();
    
private:

    int pwmPinM1;
    int sentidoPinM1;
	int sentido2PinM1;
	int pwmPinM2;
	int sentidoPinM2;
	int sentido2PinM2;
};

#endif