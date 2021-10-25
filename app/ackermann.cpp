// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.


/// @file   ackermann.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood


#include "ackermann.hpp"
#include <math.h>
#include <time.h>
#include <vector>

#define PI 3.141592654

    bool Ackermann::setRobotProps(double _tread, double _wheelBase,
    double _radiusOfCurvature, double _maxSteerAngle) {
        tread = _tread;
        wheelBase = _wheelBase;
        radiusOfCurvature = _radiusOfCurvature;
        maxSteerAngle = _maxSteerAngle;
        return true;
    }

    bool Ackermann::setDt(double timeInterval) {
        dt = timeInterval;
        return true;
    }
    bool Ackermann::setTargetHeading(double heading) {
        targetHeading = heading;
        return true;
    }

    double Ackermann::computeModelOutputs(double currentHeading) {
        return 4.20;
    }



