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
    double start, double currentVelocity, std::vector<double> *time) {

        //   while (abs(targetHeading - currentHeading) > 0.01) {
        clock_t end = clock();
        double dt = (static_cast<double> (end - start)) / CLOCKS_PER_SEC;
        time->push_back((static_cast<double> (end)) / CLOCKS_PER_SEC);

        double distTravelled = currentVelocity * dt;
        currentHeading  = (distTravelled * targetHeading/ arcLength);

        return currentHeading;
}





