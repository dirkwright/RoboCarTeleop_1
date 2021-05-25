
#include "main.h"


void initializeIO() {


}



void initialize() {
  steeringEncoder = encoderInit(1, 2, false);
  driveEncoder = encoderInit(3, 4, true);
  encoderReset(steeringEncoder);
  encoderReset(driveEncoder);
  wallSensor = ultrasonicInit (7,8);
}
