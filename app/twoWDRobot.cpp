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


bool TwoWDRobot::
computeHeading(double _initialHeading, double _targetHeading, double _initialVelocity) {
    Ackermann ackermann;

    // std::cout << "Initial heading= " <<_initialHeading << std::endl;
    // std::cout << "Target heading= " << _targetHeading << std::endl;

    clock_t startTime = clock();
    ackermann.setTargetHeading(_targetHeading);
    ackermann.calculateROC();
    ackermann.calculateArc();
    ackermann.calculateAngles(&innerWheelAngle, &outerWheelAngle);

    while (abs(_targetHeading - _initialHeading) > 0.01) {
        // std::cout << "difference " <<
        // (_targetHeading - _initialHeading) << std::endl;
        _initialHeading = ackermann.computeModelOutputs(_initialHeading,
                                            startTime, _initialVelocity, &time);

        headings.push_back(_initialHeading);
        // for (auto i = headings.begin(); i != headings.end(); i++)
        // std::cout << "Headings " << *i << " " << std::endl;
    }
    std::cout << "Heading " << _initialHeading << std::endl;

    return true;
}
bool TwoWDRobot::
computeVelocity(double _initialVelocity, double _targetVelocity) {
    PID pid;

    std::cout << "Initial velocity = " << _initialVelocity << std::endl;
    std::cout << "Target velocity = " << _targetVelocity << std::endl;

    while (abs(targetVelocity - _initialVelocity) > 0.1) {
        _initialVelocity = pid.computePID(_initialVelocity);

        velocities.push_back(_initialVelocity);
        // for (auto i = velocities.begin(); i != velocities.end(); i++)
        // std::cout << "Velocities " << *i << " " << std::endl;
    }
    return true;
}
bool TwoWDRobot::setDt(double timeInterval) {
    return true;
}
bool TwoWDRobot::visualize() {
        Visualization visuals;

        // visuals.plotVelocities(velocities, time);
        // visuals.plotHeadings(headings, time);

        return true;
    }
