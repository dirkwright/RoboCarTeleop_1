
#include "chassis.h"
#include "main.h"

void operatorControl() {
	int loopCount = 0; //just a loop counter
	int power, turn;

	while (1) {

		power = joystickGetAnalog(1, 3); // vertical axis on left joystick
		turn  = joystickGetAnalog(1, 3); // vertical axis on left joystick
		chassisSet(power + turn, turn - power);


		loopCount = loopCount + 1 ;
	}
}
