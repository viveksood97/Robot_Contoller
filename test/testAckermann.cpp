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
#include <gmock/gmock.h>
#include "ackermann.hpp"
#include "mockAckermann.hpp"

// Ackermann ackermann;


TEST(Ackermann_example, testSetAttributes) {
    MockAckermann mock;
    EXPECT_CALL(mock, setRobotProps(1.2, 1.2, 1.2, 1.2))
    .WillOnce(::testing::Return());
}


// TEST(AckermannTests, testSetAttributes) {
//     EXPECT_TRUE(ackermann.setRobotProps(1.2, 1.2, 1.2, 1.2));
//     EXPECT_TRUE(ackermann.setTargetHeading(1.2));
// }

// TEST(AckermannTests, testComputeMethods) {
//     EXPECT_TRUE(ackermann.calculateROC());
//     EXPECT_TRUE(ackermann.calculateArc());
//     double dummy = 10;
//     EXPECT_TRUE(ackermann.calculateAngles(&dummy, &dummy));
// }


// TEST(AckermannTests, testComputeModelOutputs) {
//     double testTargetHeading = 30;
//     double testCurrentHeading = 0;
//     clock_t startTime = clock();
//     double headingDiff;

//     while (true) {
//         headingDiff = std::abs(testTargetHeading - testCurrentHeading);
//         clock_t endTime = clock();
//         double dt = (static_cast<double>
//         (endTime - startTime)) / CLOCKS_PER_SEC;

//         if (headingDiff > 0.1) {
//            testCurrentHeading = ackermann.computeModelOutputs(testTargetHeading,
//            20, dt);
//         } else {
//             break;
//         }
//     }
//     EXPECT_TRUE(headingDiff < 0.1);
// }
