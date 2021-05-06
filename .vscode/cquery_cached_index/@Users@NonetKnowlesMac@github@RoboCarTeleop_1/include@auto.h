

#include "main.h"
#include "chassis.h"
#include "steering.h"

void auton() {

  int ultraRange;




       ultraRange = ultrasonicGet(wallSensor);

       if(ultraRange < 1 || ultraRange > 70){
         printf("The distance to wall is %d \n", ultraRange);
         chassisSet(-50, 50);
         steeringHold(0);
         printf("The steering is set to 0");

       }

       else if (ultraRange > 20 && ultraRange < 30){
         printf("The distance to the wall is %d \n", ultraRange);
         chassisSet(-40, 40);
         steeringHold(0);
         printf("The steering is set to 0");
       }

       else if(ultraRange > 30 && ultraRange < 50){
         printf("The distance to wall is %d \n", ultraRange);
         chassisSet(-40, 40);
         steeringHold(160);
         printf("The steering is set to 70");

       }
       else if(ultraRange > 2 && ultraRange < 20){
         printf("The distance to wall is %d \n", ultraRange);
         chassisSet(-40, 40);
         steeringHold(-160);
         printf("The steering is set to -70");


       }

       else{
         motorStopAll();
       }

}
