

<<<<<<< HEAD


/*
 * Runs the user autonomous code. This function will be started in its own task with the default
 * priority and stack size whenever the robot is enabled via the Field Management System or the
 * VEX Competition Switch in the autonomous mode. If the robot is disabled or communications is
 * lost, the autonomous task will be stopped by the kernel. Re-enabling the robot will restart
 * the task, not re-start it from where it left off.
 *
 * Code running in the autonomous task cannot access information from the VEX Joystick. However,
 * the autonomous function can be invoked from another task if a VEX Competition Switch is not
 * available, and it can access joystick information if called in this way.
 *
 * The autonomous task may exit, unlike operatorControl() which should never exit. If it does
 * so, the robot will await a switch to another mode or disable/enable cycle.
 */
=======
#include "main.h"
#include "chassis.h"
#include "steering.h"
>>>>>>> cbd830c73b92dce2480fc33d168581f8576b70d6
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
