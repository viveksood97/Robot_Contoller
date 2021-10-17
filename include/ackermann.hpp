#ifndef ACKERMANN_HPP_
#define ACKERMANN_HPP_

#include <iostream>

/// @class Ackermann
/// @brief Implementation of a PID controller
class Ackermann {
 public:
    void setRobotProps(double _tread, double _wheelBase,
    double _radiusOfCurvature, double maxSteerAngle);

    void setDt(double timeinterval);

    double computeModelOutputs(double currentHeading);


 private:
    double tread;
    double wheelBase;
    double radiusOfCurvature;
    double maxSteerAngle;
    double dt;
};

#endif  // ACKERMANN_HPP_
