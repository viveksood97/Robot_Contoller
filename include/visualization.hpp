// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   visualization.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood

#ifndef  INCLUDE_VISUALIZATION_HPP_
#define  INCLUDE_VISUALIZATION_HPP_

#include <iostream>
#include <vector>
#include <utility>


/// @class Visualization
/// @brief Implementation of an Visualization Class
class Visualization {
 public:
    /// @brief Constructor for Visualization class.
    Visualization();
    /// @brief Destructor for Visualization class.
    ~Visualization();

    /// @brief Setter for targetVelocity.
    /// @param[in] v current velocity of the robot
    /// @return true/false
    bool setTargetVelocity(double v);

    /// @brief Setter for targetHeading.
    /// @param[in] h current heading of the robot
    /// @return true/false
    bool setTargetHeading(double h);

    /// @brief method for printing outputs.
    /// @param [in] currentHeading current heading of the robot
    /// @param[in] currentVelocity current velocity of the robot
    /// @return true/false
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
