

#include "main.h"
#include "chassis.h"
#include "steering.h"

void autonomous() {

  int ultraRange;


       delay(20);

       ultraRange = ultrasonicGet(wallSensor);
       if(ultraRange < 0 || ultraRange > 70){
         motorSet(-50, 50);

       }
       else if(ultraRange > 20 && ultraRange < 50){
         motorSet(-35, 35);
         steeringSet(10);
       }
       else if(ultraRange > 10 && ultraRange < 20){
         motorSet(-35, 35);
         steeringSet(-10);

       }

       else{
         motorStopAll();
       }

}
