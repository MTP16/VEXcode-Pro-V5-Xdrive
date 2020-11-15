/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\blaze                                            */
/*    Created:      Sun Nov 15 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
vex::motor      LBM = vex::motor( vex::PORT1, true);
vex::motor      RBM = vex::motor( vex::PORT2);
vex::motor      LFM = vex::motor( vex::PORT3, true);
vex::motor      RFM = vex::motor( vex::PORT4);

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to
    // update your motors, etc.
    // ........................................................................
    // found this code online
  LFM.spin(vex::directionType::fwd, Controller1.Axis2.value() + Controller1.Axis4.value() - Controller1.Axis1.value(), vex::velocityUnits::pct);
  RFM.spin(vex::directionType::fwd, Controller1.Axis2.value() + Controller1.Axis4.value() + Controller1.Axis1.value(), vex::velocityUnits::pct);
  RBM.spin(vex::directionType::fwd, Controller1.Axis2.value() - Controller1.Axis4.value() + Controller1.Axis1.value(), vex::velocityUnits::pct);
  LBM.spin(vex::directionType::fwd, Controller1.Axis2.value() - Controller1.Axis4.value() - Controller1.Axis1.value(), vex::velocityUnits::pct);
    
    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}
