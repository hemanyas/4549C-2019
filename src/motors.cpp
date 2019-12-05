#include "main.h"
#include "motors.h"

pros::Motor left_mtr (LEFT_MTR, pros::E_MOTOR_GEARSET_18, NOT_REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor right_mtr (RIGHT_MTR, pros::E_MOTOR_GEARSET_18, REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor backright_mtr (BACKRIGHT_MTR, pros::E_MOTOR_GEARSET_18, REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor backleft_mtr (BACKLEFT_MTR, pros::E_MOTOR_GEARSET_18, NOT_REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor dr4bl_mtr (DR4BL_MTR, pros::E_MOTOR_GEARSET_18, REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor dr4br_mtr (DR4BR_MTR, pros::E_MOTOR_GEARSET_18, REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor claw_mtr (CLAW_MTR, pros::E_MOTOR_GEARSET_18, NOT_REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor intake_mtr (INTAKE_MTR, pros::E_MOTOR_GEARSET_18, REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
