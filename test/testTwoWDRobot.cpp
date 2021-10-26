/**
 * @file testTwoWDRobot.cpp
 * @authors Vivek Sood and Charu Sharma
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 2
 *
 */

#include <gtest/gtest.h>
#include "twoWDRobot.hpp"

TwoWDRobot twoWDRobot;

TEST(TwoWDRobotTests, testSetAttributes) {
    TwoWDRobot twoWDRobot;
    EXPECT_TRUE(twoWDRobot.setTargetVelocity(5));
    EXPECT_TRUE(twoWDRobot.setTargetHeading(5));
}

TEST(TwoWDRobotTests, testComputeOutputs) {
    TwoWDRobot twoWDRobot;
    twoWDRobot.setTargetHeading(10.0);
    twoWDRobot.setTargetVelocity(10.0);
    EXPECT_TRUE(twoWDRobot.computeOutput(0.0, 0.0, false));
}


