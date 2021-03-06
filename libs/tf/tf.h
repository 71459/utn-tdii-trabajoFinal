#ifndef __tf__
#define __tf__

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <wiringPiI2C.h>
#include "EasyPIO.h"

void password ();
void enterPassword ();
int  isPassword ();
void ioConfig ();
void autoFantastico ();
void laCarrera ();
void laApilada ();
void elChoque ();
void secuencia5 ();
void secuencia6 ();
void secuencia7 ();
void secuencia8 ();
void serialCom1 ();
void serialCom2 ();
int  count ();
int  send ();
void setSpeed ();
void shutDown ();

extern int led [], push [], sw [], counter, serialPort;

#endif
