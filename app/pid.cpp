// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.


/// @file   pid.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood



#include <pid.hpp>
#include <math.h>
#include <ackermann.hpp>

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


