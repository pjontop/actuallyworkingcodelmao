#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor Intake(20);  // Intake motor on port 20
inline ez::Piston dropper('H');  // Pneumatic piston on ADI port H
inline ez::Piston arm('A');  // Poutake piston on ADI port A
inline pros::Motor outake(14);
// inline pros::adi::DigitalIn limit_switch('A');