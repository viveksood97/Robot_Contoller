// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   visualization.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-17

#ifndef  INCLUDE_VISUALIZATION_HPP_
#define  INCLUDE_VISUALIZATION_HPP_

#include <iostream>
#include <vector>
#include <utility>


/// @class Visualization
/// @brief Implementation of an Visualization Class
class Visualization {
 public:
    bool setTargetVelocity(double v);
    bool setTargetHeading(double h);
    bool printOutputs(double currentHeading, double currentVelocity);
    /// @brief plots velocity vs time graph
    /// @param[in] _velocities vector of velocities
    /// @param[in] _time vector of time
    /// @return true/false
    bool plotVelocities
    (const std::vector<std::pair<double, double>>& velocities);

    /// @brief plots heading vs time graph
    /// @param[in] _headings vector of headings
    /// @param[in] _time vector of time
    /// @return true/false
    bool plotHeadings
    (const std::vector<std::pair<double, double>>& headings);
 private:
    double targetVelocity;
    double targetHeading;
};


#endif  // INCLUDE_VISUALIZATION_HPP_
