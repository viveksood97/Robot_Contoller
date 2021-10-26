/**
 * @file testPID.cpp
 * @authors Vivek Sood and Charu Sharma
 * @brief main file for testing
 * @date 2021-10-16
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 2
 *
 */

#include <gtest/gtest.h>
#include "pid.hpp"

PID pid;

TEST(PID, testSetAttributes) {
    EXPECT_TRUE(pid.setKp(0.5));
    EXPECT_TRUE(pid.setKi(0.005));
    EXPECT_TRUE(pid.setKd(0.001));
    EXPECT_TRUE(pid.setTargetVelocity(20));
}

TEST(PID, testComputePID) {
    double testCurrentVelocity = 0;
    clock_t startTime = clock();

    double velocityDiff = 1000000;

    while (true) {
       clock_t endTime = clock();
        double dt = (static_cast<double>
        (endTime - startTime)) / CLOCKS_PER_SEC;

        if (velocityDiff > 0.01) {
            testCurrentVelocity = pid.computePID(testCurrentVelocity, dt);
        } else {
            break;
        }
    }
    EXPECT_TRUE(testCurrentVelocity < 0.1);
}
