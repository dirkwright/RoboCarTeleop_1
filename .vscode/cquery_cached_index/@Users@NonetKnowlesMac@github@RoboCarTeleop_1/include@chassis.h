#ifndef _CHASSIS_H_
#define _CHASSIS_H_
#include "main.h"
#include "API.h"

// Sets the speeds of the left and right wheels of the chassis
// chassisSet(+, -) is backwards
//chassisSet(-, +) is forwards

void chassisSet(int left, int right) {
  motorSet(2, left);
  motorSet(9, right);

}

#endif // _CHASSIS_H_
