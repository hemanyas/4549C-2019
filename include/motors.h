#ifndef MOTORS_H
#define MOTORS_H
#include "main.h"

#define LEFT_MTR 20
#define RIGHT_MTR 12
#define BACKLEFT_MTR 2
#define BACKRIGHT_MTR 10
#define DR4BL_MTR 13
#define DR4BR_MTR 11
#define CLAW_MTR 4
#define INTAKE_MTR 11

#define REVERSE 1
#define NOT_REVERSE 0


extern pros::Motor left_mtr;
extern pros::Motor right_mtr;
extern pros::Motor backright_mtr;
extern pros::Motor backleft_mtr;
extern pros::Motor dr4bl_mtr;
extern pros::Motor dr4br_mtr;
extern pros::Motor claw_mtr;
extern pros::Motor intake_mtr;



#endif
