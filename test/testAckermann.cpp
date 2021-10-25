/**
 * @file testAckermann.cpp
 * @authors Vivek Sood and Charu Sharma
 * @date 2021-10-05
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 0 Proposal
 *
 */

#include <gtest/gtest.h>
#include "ackermann.hpp"

Ackermann ackermann;

TEST(AckermannTests, testSetAttributes) {
    Ackermann ackermann;
    EXPECT_TRUE(ackermann.setRobotProps(1.2, 1.2, 1.2, 1.2));
    EXPECT_TRUE(ackermann.setDt(0.1));
    EXPECT_TRUE(ackermann.setTargetHeading(1.2));
}

TEST(AckermannTests, testComputeModelOutputs) {
    double expectedResult = 1.2;
    std::vector<double> time {1, 2, 3, 4};
    EXPECT_TRUE((ackermann.computeModelOutputs(
        10, 60, 10, &time) - expectedResult >= -0.1)
    && (ackermann.computeModelOutputs(10, 60, 10,
    &time) - expectedResult <= 0.1));
}
