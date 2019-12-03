#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "main.h"
#include"motors.h"

void myPIDforward (float setpoint);
void myPIDleft(float setpoint);
void myPIDdr4b(float setpoint);
void myDR4Bdrive(float setpoint);
void myPIDclaw(float setpoint);
void myintake(float setpoint);


#endif
