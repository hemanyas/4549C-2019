#ifndef MOTORS_H
#define MOTORS_H
#include "main.h"

#define LEFT_MTR 20
#define RIGHT_MTR 11
#define BACKLEFT_MTR 10
#define BACKRIGHT_MTR 1
#define ARM_LEFT_MTR 9
#define ARM_RIGHT_MTR 2
#define CLAW_MTR 17

#define REVERSE 1
#define NOT_REVERSE 0


extern pros::Motor left_mtr;
extern pros::Motor right_mtr;
extern pros::Motor backright_mtr;
extern pros::Motor backleft_mtr;
extern pros::Motor arm_left_mtr;
extern pros::Motor arm_right_mtr;
extern pros::Motor claw_mtr;


#endif
