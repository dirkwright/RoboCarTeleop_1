
#include "main.h"
#include "chassis.h"
#include "steering.h"

void operatorControl() {

		int loopCount = 0; //just a loop counter
		int power, turn;

		while (1) {

			power = joystickGetAnalog(1, 3);
			chassisSet(power, -power);


			steeringSet(joystickGetAnalog(1, 1));


		loopCount = loopCount + 1 ;
	}
	}
