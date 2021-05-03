
#include "main.h"


void initializeIO() {


}



void initialize() {
  steeringEncoder = encoderInit(1, 2, true);
  driveEncoder = encoderInit(3, 4, true);
  encoderReset(wallSensor);
  wallSensor = ultrasonicInit (7,8);
}
