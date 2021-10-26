// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.


/// @file   twoWDRobot.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood


#include <iostream>
#include "twoWDRobot.hpp"
#include "pid.hpp"
#include "ackermann.hpp"
#include "visualization.hpp"
#include "gnuplot-iostream.h"




bool TwoWDRobot::setTargetHeading(double _targetHeading) {
    targetHeading = _targetHeading;
    return true;
}
bool TwoWDRobot::setTargetVelocity(double _targetVelocity) {
    targetVelocity = _targetVelocity;
    return true;
}
bool TwoWDRobot::computeOutput(double initialHeading, double initialVelocity, bool flag) {
    Ackermann ackermann;
    PID pid;
    Visualization visuals;
    clock_t startTime = clock();

    double currentHeading = initialHeading;
    double currentVelocity = initialVelocity;

    std::vector<std::pair<double, double>> headings;
    headings.push_back(std::make_pair((static_cast<double>
            (0)/CLOCKS_PER_SEC), currentHeading));
    std::vector<std::pair<double, double>> velocities;
    velocities.push_back(std::make_pair((static_cast<double>
            (0)/CLOCKS_PER_SEC), currentVelocity));

    visuals.setTargetHeading(targetHeading);
    visuals.setTargetVelocity(targetVelocity);
    pid.setTargetVelocity(targetVelocity);
    pid.setKp(0.5);
    pid.setKd(0.001);
    pid.setKi(0.005);
    ackermann.setTargetHeading(targetVelocity);
    ackermann.calculateROC();
    ackermann.calculateArc();
    ackermann.calculateAngles(&innerWheelAngle, &outerWheelAngle);

    while (true) {
        double headingDiff = std::abs(targetHeading - currentHeading);
        double velocityDiff = std::abs(targetVelocity - currentVelocity);

        clock_t endTime = clock();
        double dt = (static_cast<double>
        (endTime - startTime)) / CLOCKS_PER_SEC;

        if (velocityDiff > 0.01) {
            currentVelocity = pid.computePID(currentVelocity, dt);
            velocities.push_back(std::make_pair((static_cast<double>
           (endTime)/CLOCKS_PER_SEC), currentVelocity));
        }
        if (headingDiff > 0.1) {
           currentHeading = ackermann.computeModelOutputs(targetHeading,
           currentVelocity, dt);
           headings.push_back(std::make_pair((static_cast<double>
           (endTime)/CLOCKS_PER_SEC), currentHeading));

        }
        if (flag) {
            visuals.printOutputs(currentHeading, currentVelocity);
        if (headingDiff < 0.1 && velocityDiff < 0.01) {
            visuals.plotHeadings(headings);
            visuals.plotVelocities(velocities);
            break;
        }
        } else {
            break;
        }
        
    }

    return true;
}