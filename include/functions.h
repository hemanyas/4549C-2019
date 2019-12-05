#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "main.h"
#include"motors.h"

void PIDforward (float setpoint);
void PIDleft(float setpoint);
void PIDdr4b(float setpoint);
void PIDclaw(float setpoint);
void myintake(float d, float v);


#endif
