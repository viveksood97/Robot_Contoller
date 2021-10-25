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
/// @class TwoWDRobot
/// @brief Implementation of an TwoWDRobot Class
class TwoWDRobot {
 public:
    /// @brief Computes the new Heading using
    /// the Ackemann class method computeAckermann
    /// @param[in] _initialHeading starting heading of the robot
    /// @param[in] _targetHeading target heading of the robot
    /// @return 0
    bool computeHeading(double _initialHeading, double _targetHeading, double _initialVelocity);

    /// @brief Computes the new Velocity using
    /// the PID class method computePID
    /// @param[in] _initialVelocity starting Velocity of the robot
    /// @param[in] _targetVelocity target Velocity of the robot
    /// @return 0
    bool computeVelocity(double _initialVelocity, double _targetVelocity);

    /// @brief Setter for time interval.
    /// @param[in] timeInterval time interval
    /// @return true/false
    bool setDt(double timeInterval);

    /// @brief visualizing the convergence.
    /// @return true/false
    bool visualize();



 private:
    double targetHeading;
    double targetVelocity;
    double initialHeading;
    double initialVelocity;
    double innerWheelAngle;
    double outerWheelAngle;
    double dt;

    std::vector<double> headings;
    std::vector<double> velocities;
    std::vector<double> time;
};


#endif  // INCLUDE_TWOWDROBOT_HPP_
