

#include "main.h"
#include "chassis.h"
#include "steering.h"

void auton() {

  int ultraRange;
  int k1 = -2000;
  int k2 = 1;




       ultraRange = ultrasonicGet(wallSensor);

       if(ultraRange < 1 || ultraRange > 70){
         printf("The distance to wall is %d \n", ultraRange);
         chassisSet(-50, 50);
         steeringHold(0);
         printf("The steering is set to 0");

       }

       else if (ultraRange > 20 && ultraRange < 30){
         printf("The distance to the wall is %d \n", ultraRange);
         chassisSet(-50, 50);
         steeringHold(0);
         printf("The steering is set to 0");
       }

       else if(ultraRange > 30 && ultraRange < 70){
         printf("The distance to wall is %d \n", ultraRange);
         chassisSet(-60, 60);
         steeringHold((k2)/(ultraRange));
         printf("The steering is set to 70");

       }
       else if(ultraRange > 2 && ultraRange < 20){
         printf("The distance to wall is %d \n", ultraRange);
         chassisSet(-60, 60);
         steeringHold((k1)/(ultraRange));
         printf("The steering is set to -70");


       }

       else{
         motorStopAll();
       }

}
