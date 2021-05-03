
#include "main.h"


void initializeIO() {


}



void initialize() {
  steeringEncoder = encoderInit(1, 2, true);
  driveEncoder = encoderInit(3, 4, true);
<<<<<<< HEAD
    rightSonar = ultrasonicInit(7, 8);
=======

wallSensor =ultrasonicInit (7,8);
>>>>>>> cbd830c73b92dce2480fc33d168581f8576b70d6
}
