/**
 * @file main.cpp
 * @authors Vivek Sood and Charu Sharma
 * @brief main file for testing
 * @date 2021-10-05
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 0 Proposal
 *
 */
#include <iostream>
#include "ackermann.hpp"

int main() {
    Ackermann ackermann;
    std::cout << ackermann.computeModelOutputs(5) << std::endl;
    return 0;
}
