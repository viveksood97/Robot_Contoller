/**
 * @file main.cpp
 * @authors Vivek Sood and Charu Sharma
 * @brief main file for testing
 * @date 2021-10-16
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 1
 *
 */
#include <iostream>
#include "pid.hpp"
#include "ackermann.hpp"

int main() {
    PID pid;
    Ackermann ackermann;
    std::cout << ackermann.computeModelOutputs(5) << std::endl;
    std::cout << pid.computePID(5) << std::endl;
    return 0;
}

