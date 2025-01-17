#include "main.h"
#include"motors.h"
#include "functions.h"

void PIDforward(float setpoint)
{
float error;
float power;
float kP = 1;
float maxSpeed = 100;
do
{
float average = (left_mtr.get_position() + -right_mtr.get_position() + -backright_mtr.get_position() + backleft_mtr.get_position()) / 4;
error = setpoint - average;
power = error*kP;

if (fabs(power) > maxSpeed) {
  if (power > 0) {
    power = maxSpeed;
  } else if (power < 0) {
    power = -maxSpeed;
  }
}
printf("power_forward %f\n" , power);
printf("error_forward %f\n" , error);
printf("average_forward %f\n" , average);
left_mtr = power;
right_mtr = -power;
backleft_mtr = -power;
backright_mtr = -power;
pros::delay(20);
}while(fabs(error) > 5);
left_mtr.tare_position();
right_mtr.tare_position();
backleft_mtr.tare_position();
backright_mtr.tare_position();
left_mtr.move(0);
right_mtr.move(0);
backleft_mtr.move(0);
backright_mtr.move(0);
}
// while (fabs(error) > 10)
// {
//  error = setpoint – average;
//  integral = integral + error;
//  power = error*kP + integral*kI;
//   wait 15 mSec;
// }
void PIDleft(float setpoint)
{
float error;
float power;
float kP = 0.45;
int ticks_to_deg = 3;
do
{
float average = (fabs(left_mtr.get_position()) + fabs(right_mtr.get_position()) + fabs(backright_mtr.get_position()) + fabs(backleft_mtr.get_position())) / 4;
error = (setpoint* ticks_to_deg) - average;
power = error*kP;
printf("leftposition %f\n", left_mtr.get_position());
printf("average %f\n" , average);
printf("error %f\n" , error);
printf("power %f\n" , power);
// printf("power %f\n" , power);
// printf("error %f\n" , error);
// printf("average %f\n" , average);
// printf("setoiubt %f\n" , (setpoint*ticks_to_deg));
left_mtr = power;
right_mtr = -power;
backleft_mtr = power;
backright_mtr = -power;
pros::delay(20);
} while(fabs(error) > 5);
left_mtr.tare_position();
right_mtr.tare_position();
backleft_mtr.tare_position();
backright_mtr.tare_position();
left_mtr.move(0);
right_mtr.move(0);
backleft_mtr.move(0);
backright_mtr.move(0);
}
void PIDdr4b(float setpoint)
{
float error;
float power;
float kP = 1;
do
{
float average = (dr4bl_mtr.get_position() + dr4br_mtr.get_position()) /2;
error = setpoint - average;
power = error*kP;
dr4bl_mtr = power;
dr4br_mtr = power;
pros::delay(20);
}while(fabs(error) > 5);
dr4bl_mtr.tare_position();
dr4br_mtr.tare_position();
dr4bl_mtr.move(0);
dr4br_mtr.move(0);
}


void PIDclaw(float setpoint)
{
float error;
float power;
float kP = 1;
do
{
float average = (claw_mtr.get_position());
error = setpoint - average;
power = error*kP;
claw_mtr= power;
pros::delay(20);
}while(fabs(error)> 20);
claw_mtr.tare_position();
claw_mtr.move(0);
}
