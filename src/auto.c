

#include "main.h"
#include "chassis.h"
#include "steering.h"
void autonomous() {

 int ultraRange = 0;


    while(1){

      delay(20);

      ultraRange=ultrasonicGet(wallSensor);
      if(ultraRange<0 || ultraRange>70){
        motorSet(LEFT,50);
        motorSet(RIGHT,50);
      }
      else if(ultraRange>(ultraFollow+4)){
        motorSet(LEFT,35);
        motorSet(RIGHT,-35);
      }
      else if(ultraRange<(ultraFollow-4)){
        motorSet(LEFT,-35);
        motorSet(RIGHT,35);
      }

      else{
        motorStopAll();
      }
