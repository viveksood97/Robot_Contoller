/// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.


/// @file   mockAckermann.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood


#ifndef INCLUDE_MOCKACKERMANN_HPP_
#define INCLUDE_MOCKACKERMANN_HPP_

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <ackermann.hpp>

/// @class Ackermann
/// @brief Implementation of an Ackermann Controller
class MockAckermann : public Ackermann {
 public:
    MOCK_METHOD4(setRobotProps, bool(double _tread,
    double _wheelBase, double _radiusOfCurvature,
    double _maxSteerAngle));

    MOCK_METHOD1(setTargetHeading, bool(double heading));

    /// @brief to calculate radiusOfCurvature.
    /// @return true/false
    MOCK_METHOD0(calculateROC, bool());

    /// @brief to calculate the arcLength.
    /// @return true/false
    MOCK_METHOD0(calculateArc, bool());

    /// @brief to calculate the wheel angles.
    /// @param[in] radiusOfCurvature radius of curvature of the turn
    /// @return true/false
    MOCK_METHOD2(calculateAngles, bool(double* _innerWheelAngle,
    double* _outerWheelAngle));

    /// @brief Computes outputs according to ackermann steering model
    /// @param[in] currentHeading current heading of the robot
    /// @return newHeading
    MOCK_METHOD3(computeModelOutputs, double(double currentHeading,
    double currentVelocity, double dt));

};

#endif  // INCLUDE_MOCKACKERMANN_HPP_
