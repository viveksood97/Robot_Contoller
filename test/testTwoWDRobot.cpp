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
    EXPECT_TRUE(twoWDRobot.computeHeading(10, 10));
}

TEST(TwoWDRobotTests, testcomputeVelocity) {
    EXPECT_TRUE(twoWDRobot.computeVelocity(10, 10));
}
