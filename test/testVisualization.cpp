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
#include "visualization.hpp"


Visualization visualization;

TEST(visualizationTests, testSetAttributes) {
    EXPECT_TRUE(visualization.setTargetVelocity(10));
    EXPECT_TRUE(visualization.setTargetHeading(10));
}

TEST(visualizationTests, testPrintOutputs) {
    std::cout << std::endl;
    EXPECT_TRUE(visualization.printOutputs(10, 10));
}

TEST(visualizationTests, testPlotVelocities) {
    std::vector<std::pair<double, double>> velocities;
    for (int i = 0 ; i != 5; ++i) {
       velocities.push_back(std::make_pair
       (static_cast<double>(i), static_cast<double>(i)));
    }
    EXPECT_TRUE(visualization.plotVelocities(velocities));
}

TEST(visualizationTests, testPlotHeadings) {
    std::vector<std::pair<double, double>> headings;
    for (int i = 0 ; i != 5; ++i) {
       headings.push_back(std::make_pair
       (static_cast<double>(i), static_cast<double>(i)));
    }
    EXPECT_TRUE(visualization.plotHeadings(headings));
}
