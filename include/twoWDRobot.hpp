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
    /// @brief Computes the new Heading using
    /// the Ackemann class method computeAckermann
    /// @param[in] _initialHeading starting heading of the robot
    /// @param[in] _targetHeading target heading of the robot
    /// @return true/false
    bool computeHeading(double _initialHeading, double _targetHeading);

    /// @brief Computes the new Velocity using
    /// the PID class method computePID
    /// @param[in] _initialVelocity starting Velocity of the robot
    /// @param[in] _targetVelocity target Velocity of the robot
    /// @return true/false
    bool computeVelocity(double _initialVelocity, double _targetVelocity);

    /// @brief Setter for time interval.
    /// @param[in] timeInterval time interval
    /// @return true/false
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
