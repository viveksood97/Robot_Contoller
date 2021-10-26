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

Ackermann::Ackermann() {
    currentHeading = 0;
    targetHeading = 0;
    arcLength = 0;
    tread = 0;
    wheelBase = 0;
    radiusOfCurvature = 0;
    maxSteerAngle = 0;
}
Ackermann::~Ackermann() {}

bool Ackermann::setRobotProps(double _tread, double _wheelBase,
double _radiusOfCurvature, double _maxSteerAngle) {
    tread = _tread;
    wheelBase = _wheelBase;
    radiusOfCurvature = _radiusOfCurvature;
    maxSteerAngle = _maxSteerAngle;
    return true;
}

bool Ackermann::setTargetHeading(double heading) {
    targetHeading = heading;
    return true;
}

bool Ackermann::calculateROC() {
    radiusOfCurvature = atan(targetHeading) * 180 / PI;
    return true;
}

bool Ackermann::calculateArc() {
    arcLength = 2 * PI * radiusOfCurvature * targetHeading/ 360;
    return true;
}
bool Ackermann::calculateAngles(double* _innerWheelAngle,
double* _outerWheelAngle) {
*_innerWheelAngle = atan(wheelBase / (radiusOfCurvature - 0.5*tread));
*_outerWheelAngle = atan(wheelBase / (radiusOfCurvature + 0.5*tread));
// in radians

return true;
}

double Ackermann::computeModelOutputs(double currentHeading,
double currentVelocity, double dt) {
    double distTravelled = currentVelocity * dt;
    currentHeading  =(distTravelled * targetHeading/ arcLength);
    return currentHeading;
}





