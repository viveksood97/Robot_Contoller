// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.

/// @file   main.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood
/// ENPM808X- midterm

#include <iostream>
#include "twoWDRobot.hpp"

/**
 *  @brief  Main Function to call the methods and show demostration
 *  @param  None
 *  @return 0
 */
int main() {
    TwoWDRobot robot;
    double targetHeading;
    double targetVelocity;
    std::cout << "Enter Target Heading(deg): ";
    std::cin >> targetHeading;
    std::cout << std::endl;
    std::cout << "Enter Target Velocity(m/s): ";
    std::cin >> targetVelocity;
    std::cout << std::endl;


    robot.setTargetHeading(targetHeading);
    robot.setTargetVelocity(targetVelocity);
    robot.computeOutput(0.0, 0.0, true);

    return 0;
}

