#include "main.h"
#include "motors.h"
#include "functions.h"
int motorspeed = 127;
/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(4, "ight ima head out");

	pros::lcd::register_btn1_cb(on_center_button);
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}


/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */



void opcontrol()
 {

	pros::Controller master(pros::E_CONTROLLER_MASTER);

//joysticks
	while (true) {
		pros::lcd::print(0, "%d %d %d", (pros::lcd::read_buttons() & LCD_BTN_LEFT) >> 2,
		                 (pros::lcd::read_buttons() & LCD_BTN_CENTER) >> 1,
		                 (pros::lcd::read_buttons() & LCD_BTN_RIGHT) >> 0);
		int left = master.get_analog(ANALOG_LEFT_Y);
		int right = -(master.get_analog(ANALOG_RIGHT_Y));


		left_mtr = left;
		right_mtr = -right;
		backleft_mtr = left;
		backright_mtr = -right;



left_mtr.get_position();
right_mtr.get_position();
backright_mtr.get_position();
backleft_mtr.get_position();

printf("left_mtr %f\n" , left_mtr.get_position());
printf("right_mtr %f\n" , right_mtr.get_position());
printf("backright_mtr %f\n" , backright_mtr.get_position());
printf("backleft_mtr %f\n" , backleft_mtr.get_position());


if(master.get_digital(DIGITAL_R1))
{
	claw_mtr = 50;
	printf("clawmtr is 50 \n" );
}

else if(master.get_digital(DIGITAL_R2))
{
	claw_mtr = -50;
	printf("clawmtr is -50 \n" );

}

else
{
	claw_mtr = 0;
}





if(master.get_digital(DIGITAL_L1))
{
	arm_left_mtr = 50;
	arm_right_mtr = 50;
}
else if(master.get_digital(DIGITAL_L2))
{
	arm_left_mtr = -50;
	arm_right_mtr = -50;
}

else
{
	arm_left_mtr = 0;
	arm_right_mtr = 0;
	arm_left_mtr.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
	arm_right_mtr.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
}
pros::delay(20);
	}


}









void autonomous()
{

myPIDforward(200);
// myPIDclaw(850);
// myPIDarm(200);
// pros::delay(1000);
// myPIDforward(-750);
// pros::delay(1000);
// myLEFT(200,400);
// pros::delay(1000);
// myPIDforward(800);
// pros::delay(100);
// myPIDclaw(-300);
// pros::delay(1000);
// myPIDforward(-800);
// pros::delay(1000);
// myPIDarm(-200);
// myRIGHT(200,400);
// pros::delay(1000);
// myPIDforward(1000);
// myPIDclaw(300);
// myPIDforward(-1000);
// myLEFT(200,400);
// myPIDforward(800);
// myPIDclaw(-300);

// myLEFT(200,-400);



}
