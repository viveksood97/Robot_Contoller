// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   ackermann.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-16


#ifndef ACKERMANN_HPP_
#define ACKERMANN_HPP_

#include <iostream>

/// @class Ackermann
/// @brief Implementation of an Ackermann Controller
class Ackermann {
 public:
    bool setRobotProps(double _tread, double _wheelBase,
    double _radiusOfCurvature, double _maxSteerAngle);

    bool setDt(double timeInterval);
    bool setTargetHeading(double heading);

    double computeModelOutputs(double currentHeading);

 private:
    double tread;
    double wheelBase;
    double radiusOfCurvature;
    double maxSteerAngle;
    double dt;
    double targetHeading;
};

#endif  // ACKERMANN_HPP_
