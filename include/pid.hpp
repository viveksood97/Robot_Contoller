// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   pid.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-16

#ifndef INCLUDE_PID_HPP_
#define INCLUDE_PID_HPP_

#include <iostream>

/// @class PIDController
/// @brief Implementation of a PID controller
class PID {
 public:
    /// @brief Setter for proportional gain.
    /// @param[in] pGain proportional gain
    /// @return true/false
    bool setKp(double pGain);

    /// @brief Setter for diffrential gain.
    /// @param[in] dGain diffrential gain
    /// @return true/false
    bool setKd(double dGain);

    /// @brief Setter for integral gain.
    /// @param[in] iGain integral gain
    /// @return true/false
    bool setKi(double iGain);

    /// @brief Setter for time interval.
    /// @param[in] timeInterval time interval
    /// @return true/false
    bool setDt(double timeInterval);

    /// @brief Setter for targetVelocity.
    /// @param[in] velocity target velocity of the robot
    /// @return true/false
    bool setTargetVelocity(double velocity);

    /// @brief Computes the control output using PID controller
    /// @param[in] currentVelocity current velocity of the robot
    /// @return newVelocity
    double computePID(double currentVelocity);

 private:
    double kp;
    double ki;
    double kd;
    double dt;
    double cumulativeError = 0;
    double prevError = 0.0;
    double targetVelocity;
};



#endif  // INCLUDE_PID_HPP_
