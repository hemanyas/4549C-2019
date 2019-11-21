#include "main.h"
#include "motors.h"

pros::Motor left_mtr (LEFT_MTR, pros::E_MOTOR_GEARSET_18, NOT_REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor right_mtr (RIGHT_MTR, pros::E_MOTOR_GEARSET_18, REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor backright_mtr (BACKRIGHT_MTR, pros::E_MOTOR_GEARSET_18, REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor backleft_mtr (BACKLEFT_MTR, pros::E_MOTOR_GEARSET_18, NOT_REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor arm_right_mtr (ARM_RIGHT_MTR, pros::E_MOTOR_GEARSET_18, REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor arm_left_mtr (ARM_LEFT_MTR, pros::E_MOTOR_GEARSET_18, NOT_REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor claw_mtr (CLAW_MTR, pros::E_MOTOR_GEARSET_18, NOT_REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
