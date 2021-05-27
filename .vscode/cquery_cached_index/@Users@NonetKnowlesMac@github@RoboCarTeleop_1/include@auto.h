

#include "main.h"
#include "chassis.h"
#include "steering.h"

void auton() {

  int ultraRange;
  int k1 = -2000;
  int k2 = 1;

int x = 700; //x should be the length of the straight in encoder counts
int y = 1400; //y should be the length of the turn in encoder counts

//I think 1 foot = about 450 encoder counts, but maybe check this.


int distance = encoderGet(driveEncoder);

if(distance > 0 && distance < x){
  printf("The driveEncoder is %d \n", distance);
  chassisSet(-80, 80);
}


else if (distance < y && distance > x){
  chassisSet(-50, 50);
  printf("The driveEncoder is %d \n", distance);

}
else if (distance > y){
  encoderReset(driveEncoder);
  printf("The driveEncoder is %d \n", distance);
}
//else {
  //chassisSet(-50, 50);
//  printf("The driveEncoder is %d \n", distance);
//}



       ultraRange = ultrasonicGet(wallSensor);

       if(ultraRange < 1 || ultraRange > 70){
         printf("The distance to wall is %d \n", ultraRange);
         //chassisSet(-50, 50);
         steeringHold(0);
         //printf("The steering is set to 0");

       }

       else if (ultraRange > 20 && ultraRange < 30){
         printf("The distance to the wall is %d \n", ultraRange);
         //chassisSet(-50, 50);
         steeringHold(0);
         //printf("The steering is set to 0");
       }

       else if(ultraRange > 30 && ultraRange < 70){
         printf("The distance to wall is %d \n", ultraRange);
         //chassisSet(-60, 60);
         steeringHold((k2)/(ultraRange));
         //printf("The steering is set to 70");

       }
       else if(ultraRange > 2 && ultraRange < 20){
         printf("The distance to wall is %d \n", ultraRange);
         //chassisSet(-60, 60);
         steeringHold((k1)/(ultraRange));
         //printf("The steering is set to -70");


       }

       else{
         motorStopAll();
       }

}
