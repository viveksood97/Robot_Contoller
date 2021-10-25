// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   pid.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-16

#include <pid.hpp>

    bool PID::setKp(double pGain) {
        kp = pGain;
        return true;
    }
    bool PID::setKd(double dGain) {
        kd = dGain;
        return true;
    }
    bool PID::setKi(double iGain) {
        ki = iGain;
        return true;
    }
    bool PID::setDt(double timeInterval) {
        dt = timeInterval;
        return true;
    }
    bool PID::setTargetVelocity(double velocity) {
        targetVelocity = velocity;
        return true;
    }
    double PID::computePID(double currentVelocity) {
        prevError = targetVelocity - currentVelocity;
        double p_term = kp * prevError;

        cumulativeError = cumulativeError + prevError * dt;
        double i_term = ki * cumulativeError;

        double d_term = kd * (cumulativeError - prevError) / dt;

        double output = p_term + i_term + d_term;

        cumulativeError = prevError;

        currentVelocity = currentVelocity + output;  // newVelocity
        return currentVelocity;
    }


