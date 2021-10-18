/**
 * @file testTwoWDRobot.cpp
 * @authors Vivek Sood and Charu Sharma
 * @date 2021-10-17
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 0 Proposal
 *
 */

#include <gtest/gtest.h>
#include "twoWDRobot.hpp"

TwoWDRobot twoWDRobot;

TEST(TwoWDRobotTests, testSetAttributes) {
    EXPECT_TRUE(twoWDRobot.setDt(0.1));
}

TEST(TwoWDRobotTests, testcomputeHeading) {
    double expectedResult = 1.6;
    EXPECT_TRUE((twoWDRobot.computeHeading(10, 10) - expectedResult >= -0.1)
    && (twoWDRobot.computeHeading(10, 10) - expectedResult <= 0.1));
}

TEST(TwoWDRobotTests, testcomputeVelocity) {
    double expectedResult = 1.7;
    EXPECT_TRUE((twoWDRobot.computeVelocity(10, 10) - expectedResult >= -0.1)
    && (twoWDRobot.computeVelocity(10, 10) - expectedResult <= 0.1));
}
