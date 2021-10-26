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

    robot.setTargetHeading(60.0);
    robot.setTargetVelocity(20.0);
    robot.computeOutput(0.0, 0.0, true);

    return 0;
}

