// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.


/// @file   twoWDRobot.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood


#ifndef INCLUDE_TWOWDROBOT_HPP_
#define INCLUDE_TWOWDROBOT_HPP_

#include <iostream>
#include <vector>
#include <utility>
/// @class TwoWDRobot
/// @brief Implementation of an TwoWDRobot Class
class TwoWDRobot {
 public:
    bool setTargetHeading(double _targetHeading);
    bool setTargetVelocity(double _targetVelocity);
    bool computeOutput(double initialHeading, double initialVelocity);



 private:
    double targetHeading;
    double targetVelocity;
    double innerWheelAngle;
    double outerWheelAngle;

    std::vector<std::pair<double, double>> headings;
    std::vector<std::pair<double, double>> velocities;
};


#endif  // INCLUDE_TWOWDROBOT_HPP_
