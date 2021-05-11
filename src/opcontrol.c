
#include "main.h"
#include "chassis.h"
#include "steering.h"
#include "auto.h"

void operatorControl() {
	int loopCount = 0; //just a loop counter
	int power, turn;

	while (1) {
		printf("code");

 if(joystickGetDigital(1, 6, JOY_UP)){
	 power = joystickGetAnalog(1, 3);
	 chassisSet(power, -power);


 steeringSet(joystickGetAnalog(1, 1));


 loopCount = loopCount + 1 ;
 }


	if(joystickGetDigital(1, 8, JOY_UP)){
		printf("AUTO WORKING");
	//steeringHold(-70);
		auton();
}

	delay(50);
}

}
