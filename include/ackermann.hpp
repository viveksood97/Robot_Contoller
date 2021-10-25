/// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.


/// @file   ackermann.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood


#ifndef INCLUDE_ACKERMANN_HPP_
#define INCLUDE_ACKERMANN_HPP_

#include <iostream>
#include <vector>

/// @class Ackermann
/// @brief Implementation of an Ackermann Controller
class Ackermann {
 public:
    /// @brief Setter for robot parameters.
    /// @param[in] _tread the value of tread for the robot
    /// @param[in] _wheelBase the value of wheelBase for the robot
    /// @param[in] _radiusOfCurvature the value of radiusOfCurvature
    /// @param[in] _maxSteerAngle the value of maxSteerAngle for the robot
    /// @return true/false
    bool setRobotProps(double _tread, double _wheelBase,
    double _radiusOfCurvature, double _maxSteerAngle);


    /// @brief Setter for time interval.
    /// @param[in] timeInterval time interval
    /// @return true/false
    bool setDt(double timeInterval);

    /// @brief Setter for targetHeading.
    /// @param[in] heading target heading of the robot
    /// @return true/false
    bool setTargetHeading(double heading);

    /// @brief Computes outputs according to ackermann steering model
    /// @param[in] currentHeading current heading of the robot
    /// @return newHeading
    double computeModelOutputs(double currentHeading);

 private:
    double tread;
    double wheelBase;
    double radiusOfCurvature;
    double maxSteerAngle;
    double dt;
    double targetHeading;
};

#endif  // INCLUDE_ACKERMANN_HPP_
