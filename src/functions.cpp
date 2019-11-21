#include "main.h"
#include"motors.h"
#include "functions.h"

void myPIDforward(float setpoint)
{
	float error;
	float power;
	float kP = 0.45;


{
float average = (left_mtr.get_position() + right_mtr.get_position() + backright_mtr.get_position() + backleft_mtr.get_position()) / 4;
error = setpoint - average;
power = error*kP;
printf("power_forward %f\n" , power);
printf("error_forward %f\n" , error);
printf("average_forward %f\n" , average);
// printf("left_mtr %f\n" , left_mtr.get_position());
left_mtr = power;
right_mtr = power;
backleft_mtr = power;
backright_mtr = power;

pros::delay(20);
} while(abs(error) > 10);

left_mtr.tare_position();
right_mtr.tare_position();
backleft_mtr.tare_position();
backright_mtr.tare_position();

left_mtr.move(0);
right_mtr.move(0);
backleft_mtr.move(0);
backright_mtr.move(0);
}










//
// void myPIDleft(float setpoint)
// {
// 	float error;
// 	float power;
// 	float kP = 0.45;
// 	int ticks_to_deg = 3;
//
// do
// {
// float average1 = (left_mtr.get_position() + right_mtr.get_position()+ backright_mtr.get_position() + backleft_mtr.get_position()) / 4;
// error = (setpoint*ticks_to_deg) - average;
// power = error*kP;
//
// printf("power %f\n" , power);
// printf("error %f\n" , error);
// printf("average %f\n" , average);
// printf("setoiubt %f\n" , (setpoint*ticks_to_deg));
// printf("left_mtr %f\n" , left_mtr.get_position());
// left_mtr = -power;
// right_mtr = power;
// backleft_mtr = -power;
// backright_mtr = power;
//
// pros::delay(20);
// } while(abs(error) > 5);
//
// left_mtr.tare_position();
// right_mtr.tare_position();
// backleft_mtr.tare_position();
// backright_mtr.tare_position();
//
// left_mtr.move(0);
// right_mtr.move(0);
// backleft_mtr.move(0);
// backright_mtr.move(0);
// }







void myPIDarm(float setpoint)
{
	float error;
	float power;
	float kP = 1;


do
{
float average = (arm_left_mtr.get_position() + arm_right_mtr.get_position()) / 2;
error = setpoint - average;
power = error*kP;
//
printf("power %f\n" , power);
printf("error %f\n" , error);
printf("average %f\n" , average);
arm_left_mtr = power;
arm_right_mtr = power;

pros::delay(20);
} while(abs(error) > 10);

arm_left_mtr.tare_position();
arm_right_mtr.tare_position();


arm_right_mtr.move(0);
}







void myPIDclaw(float setpoint)
{
	float error;
	float power;
	float kP = 1;

do
{
float average = (claw_mtr.get_position());
error = setpoint - average;
power = error*kP;

printf("power %f\n" , power);
printf("error %f\n" , error);
printf("average %f\n" , average);
claw_mtr = power;


pros::delay(20);
} while(abs(error) > 20);

claw_mtr.tare_position();

claw_mtr.move(0);

}


// myCLAW(int s, int d);
// claw_mtr.move_absolute();
// pros::delay(20);
//
// claw_mtr.tare_position();


void myRIGHT(int speed, int time)
{
		left_mtr.move(speed);
  	right_mtr.move(-speed);
  	backleft_mtr.move(speed);
  	backright_mtr.move(-speed);
		pros::delay(time);


	left_mtr = 0;
	right_mtr = 0;
	backleft_mtr = 0;
	backright_mtr = 0;

}



void myLEFT(int speed, int time)
{
		left_mtr.move(-speed);
  	right_mtr.move(speed);
  	backleft_mtr.move(-speed);
  	backright_mtr.move(speed);
		pros::delay(time);


	left_mtr = 0;
	right_mtr = 0;
	backleft_mtr = 0;
	backright_mtr = 0;

}
