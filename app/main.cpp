/**
 * @file main.cpp
 * @authors Vivek Sood and Charu Sharma
 * @brief main file for testing
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 2
 *
 */

#include <iostream>
#include "pid.hpp"
#include "ackermann.hpp"
#include "twoWDRobot.hpp"

int main() {
    // PID pid;
    // Ackermann ackermann;
    TwoWDRobot robot;

    // std::cout << ackermann.computeModelOutputs(5) << std::endl;
    // std::cout << pid.computePID(5) << std::endl;
    std::cout << "Heading: " << robot.computeHeading(10, 10) << "\n"
    << "Velocity: " << robot.computeVelocity(10, 10) << std::endl;
    return 0;
}

