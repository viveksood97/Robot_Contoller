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
    /// @brief Constructor for TwoWDRobot class.
    TwoWDRobot();
    /// @brief Destructor for TwoWDRobot class.
    ~TwoWDRobot();

    /// @brief Setter for Target Heading.
    /// @param[in] _targetheading target heading of the robot
    /// @return true/false
    bool setTargetHeading(double _targetHeading);

    /// @brief Setter for target Velocity.
    /// @param[in] _targetVelocity target Velocity of the robot
    /// @return true/false
    bool setTargetVelocity(double _targetVelocity);

    /// @brief method to compute the outputs
    /// @param[in] initialHeading Initial Heading
    /// @param[in] initialVelocity Initial Velocity of the robot
    /// @param[in] flag flag for testing
    /// @return true/false
    bool computeOutput(double initialHeading,
    double initialVelocity, bool flag);


 private:
    double targetHeading;
    double targetVelocity;
    double innerWheelAngle;
    double outerWheelAngle;
};


#endif  // INCLUDE_TWOWDROBOT_HPP_
