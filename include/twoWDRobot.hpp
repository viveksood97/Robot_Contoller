// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   twoWDRobot.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-16

#ifndef INCLUDE_TWOWDROBOT_HPP_
#define INCLUDE_TWOWDROBOT_HPP_

#include <iostream>

/// @class TwoWDRobot
/// @brief Implementation of an TwoWDRobot Class
class TwoWDRobot {
 public:
    double computeHeading(double _initialHeading, double _targetHeading);
    double computeVelocity(double _initialVelocity, double _targetVelocity);
    bool setDt(double timeInterval);

 private:
    double targetHeading;
    double targetVelocity;
    double initialHeading;
    double initialVelocity;
    double innerWheelAngle;
    double outerWheelAngle;
    double dt;
};


#endif  // INCLUDE_TWOWDROBOT_HPP_
