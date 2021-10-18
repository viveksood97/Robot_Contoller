/**
 * @file testPID.cpp
 * @authors Vivek Sood and Charu Sharma
 * @brief main file for testing
 * @date 2021-10-16
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 1
 *
 */

#include <gtest/gtest.h>
#include "pid.hpp"

TEST(PID, testSetAttributes) {
    PID pid;
    EXPECT_TRUE(pid.setKp(1.2));
    EXPECT_TRUE(pid.setKi(1.2));
    EXPECT_TRUE(pid.setKd(1.2));
    EXPECT_TRUE(pid.setDt(0.1));
    EXPECT_TRUE(pid.setTargetVelocity(1.2));
}

TEST(PID, testComputePID) {
    PID pid;
    double expectedResult = 6.9;
    EXPECT_TRUE((pid.computePID(10) - expectedResult >= -0.1)
    && (pid.computePID(10) - expectedResult <= 0.1));
}
