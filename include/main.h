
#ifndef MAIN_H_

// This prevents multiple inclusion, which isn't bad for this file but is good practice
#define MAIN_H_

#include <API.h>
Encoder steeringEncoder;
Encoder driveEncoder;
<<<<<<< HEAD
Ultrasonic rightSonar;

=======
Ultrasonic wallSensor;
>>>>>>> cbd830c73b92dce2480fc33d168581f8576b70d6
// Allow usage of this file in C++ programs
#ifdef __cplusplus
extern "C" {
#endif


void autonomous();

void initializeIO();

void initialize();

void operatorControl();

// End C++ export structure
#ifdef __cplusplus
}
#endif

#endif
