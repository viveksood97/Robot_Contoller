// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   ackermann.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-16

#include "ackermann.hpp"

    bool Ackermann::setRobotProps(double _tread, double _wheelBase,
    double _radiusOfCurvature, double _maxSteerAngle) {
        return true;
    }

    bool Ackermann::setDt(double timeInterval) {
        return true;
    }
    bool Ackermann::setTargetHeading(double heading) {
        return true;
    }

    double Ackermann::computeModelOutputs(double currentHeading) {
        return 4.20;
    }



