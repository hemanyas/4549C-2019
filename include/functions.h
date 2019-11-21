#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "main.h"
#include"motors.h"




void myPIDforward (float setpoint);
void myPIDreverse(float setpoint);
void myPIDleft(float setpoint);
void myPIDright(float setpoint);
void myPIDarm(float setpoipnt);
// void myARM(float setpoint);
void myPIDclaw(float setpoint);
void myLEFT(int speed, int time);
void myRIGHT(int speed, int time);


#endif
