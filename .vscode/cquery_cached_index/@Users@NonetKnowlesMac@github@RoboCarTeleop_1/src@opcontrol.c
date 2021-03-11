

#include "main.h"
// Mr Wright Was Here
// Mekhi is here
//James was here
void operatorControl() {
	while (1) {

		if(joystickGetAnalog(1, 1)){
			steeringSet(50);
		}
		printf("Hello PROS User!\n");
		delay(20);
	}
}
