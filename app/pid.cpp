// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.


/// @file   pid.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood


/**
 *  @brief  Implements PID on the TwoWDRobot class
 */
#include <pid.hpp>
#include <math.h>

    PID::PID() {
    kp = 0;
    ki = 0;
    kd = 0;
    cumulativeError = 0;
    prevError = 0.0;
    targetVelocity = 0;
    }

    PID::~PID() {}

    // Setter for proptional gain
    bool PID::setKp(double pGain) {
        kp = pGain;
        return true;
    }
    // Setter for diffrential gain
    bool PID::setKd(double dGain) {
        kd = dGain;
        return true;
    }
    // Setter for intergral gain
    bool PID::setKi(double iGain) {
        ki = iGain;
        return true;
    }

    // Setter for target velocity
    bool PID::setTargetVelocity(double velocity) {
        targetVelocity = velocity;
        return true;
    }

    // Method to compute PID outputs
    double PID::computePID(double currentVelocity, double t) {
        prevError = targetVelocity - currentVelocity;
        double p_term = kp * prevError;

        cumulativeError = cumulativeError + prevError * t;
        double i_term = ki * cumulativeError;

        double d_term = kd * (cumulativeError - prevError) / t;

        double output = p_term + i_term + d_term;

        cumulativeError = prevError;

        currentVelocity = currentVelocity + output;  // newVelocity
        return currentVelocity;
    }


