// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.

/// @file   pid.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-16


#ifndef PID_HPP_
#define PID_HPP_

#include <iostream>

/// @class PIDController
/// @brief Implementation of a PID controller
class PID {
 public:
    void setKp(double pGain);
    void setKi(double iGain);
    void setKd(double dGain);
    void setDt(double timeinterval);
    void setTargetVelocity(double velocity);
    double computePID(double currentVelocity);

 private:
    double kp;
    double ki;
    double kd;
    double cumulativeError;
    double prevError;
    double targetVelocity;
    double dt;
};

#endif  // PID_HPP_
