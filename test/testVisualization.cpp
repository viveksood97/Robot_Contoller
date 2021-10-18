/**
 * @file testVisualization.cpp
 * @authors Vivek Sood and Charu Sharma
 * @date 2021-10-18
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 1
 *
 */

#include <gtest/gtest.h>
#include <vector>
#include "visualization.hpp"

Visualization visualization;

TEST(visualizationTests, testSetAttributes) {
    std::vector<double> testing{1, 2, 3, 4};
    EXPECT_TRUE(visualization.setVelocities(testing));
    EXPECT_TRUE(visualization.setHeadings(testing));
    EXPECT_TRUE(visualization.setTime(testing));
}

TEST(visualizationTests, testPlotVelocities) {
    std::vector<double> velocity{1, 2, 3, 4};
    std::vector<double> time{1, 2, 3, 4};
    EXPECT_TRUE(visualization.plotVelocities(velocity, time));
}

TEST(visualizationTests, testcomputeHeading) {
    std::vector<double> heading{1, 2, 3, 4};
    std::vector<double> time{1, 2, 3, 4};
    EXPECT_TRUE(visualization.plotHeadings(heading, time));
}
