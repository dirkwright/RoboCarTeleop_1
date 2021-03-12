
#include "chassis.h"
#include "main.h"

void operatorControl() {
	while (1) {

		int loopCount = 0; //just a loop counter
		int power, turn;

		while (1) {

			power = joystickGetAnalog(1, 3); // vertical axis on left joystick
			turn  = joystickGetAnalog(1, 3); // vertical axis on left joystick
			chassisSet(power + turn, turn - power);

		if(joystickGetAnalog(1, 1)){
			steeringSet(50);
		}
		printf("Hello PROS User!\n");
		delay(20);


		loopCount = loopCount + 1 ;
	}
	}
}
