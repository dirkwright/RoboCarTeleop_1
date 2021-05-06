#ifndef _STEERING_H_
#define _STEERING_H_

#include "main.h"


int Kp = 1;


void steeringSet(int speed){
  motorSet(3, speed);
}


void steeringHold(int steeringAngle){

 printf("The steering encoder value is %d\n", encoderGet(steeringEncoder));
 int counts = encoderGet(steeringEncoder);
 int error = steeringAngle - counts;
 steeringSet(Kp * error);
 }

#endif
