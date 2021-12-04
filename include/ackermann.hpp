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
#include <utility>

/// @class Ackermann
/// @brief Implementation of an Ackermann Controller
class Ackermann {
 public:
    /// @brief Constructor for Ackermann class.
    Ackermann();
    /// @brief Destructor for Ackermann class.
    virtual ~Ackermann();

    /// @brief Setter for robot parameters.
    /// @param[in] _tread the value of tread for the robot
    /// @param[in] _wheelBase the value of wheelBase for the robot
    /// @param[in] _radiusOfCurvature the value of radiusOfCurvature
    /// @param[in] _maxSteerAngle the value of maxSteerAngle for the robot
    /// @return true/false
    virtual bool setRobotProps(double _tread, double _wheelBase,
    double _radiusOfCurvature, double _maxSteerAngle);

    /// @brief Setter for targetHeading.
    /// @param[in] heading target heading of the robot
    /// @return true/false
    virtual bool setTargetHeading(double heading);

    /// @brief to calculate radiusOfCurvature.
    /// @return true/false
    virtual bool calculateROC();

    /// @brief to calculate the arcLength.
    /// @return true/false
    virtual bool calculateArc();

    /// @brief to calculate the wheel angles.
    /// @param[in] radiusOfCurvature radius of curvature of the turn
    /// @return true/false
    virtual bool calculateAngles(double* _innerWheelAngle,
    double* _outerWheelAngle);

    /// @brief Computes outputs according to ackermann steering model
    /// @param[in] currentHeading current heading of the robot
    /// @return newHeading
    virtual double computeModelOutputs(double currentHeading,
    double currentVelocity, double dt);


 private:
    double currentHeading;
    double targetHeading;
    double arcLength;
    double tread;
    double wheelBase;
    double radiusOfCurvature;
    double maxSteerAngle;
};

#endif  // INCLUDE_ACKERMANN_HPP_
