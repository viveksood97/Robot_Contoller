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


/// @class Visualization
/// @brief Implementation of an Visualization Class
class Visualization {
 public:
    // @brief Setter for a vector of velocities.
    /// @param[in] v vector of velocities
    /// @return true/false
    bool setVelocities(std::vector<double> v);

    // @brief Setter for a vector of headings.
    /// @param[in] h vector of headings
    /// @return true/false
    bool setHeadings(std::vector<double> h);

    // @brief Setter for a vector of time.
    /// @param[in] t vector of time
    /// @return true/false
    bool setTime(std::vector<double> t);

    /// @brief plots velocity vs time graph
    /// @param[in] _velocities vector of velocities
    /// @param[in] _time vector of time
    /// @return true/false
    bool plotVelocities
    (std::vector<double> _velocities, std::vector<double> _time);

    /// @brief plots heading vs time graph
    /// @param[in] _headings vector of headings
    /// @param[in] _time vector of time
    /// @return true/false
    bool plotHeadings
    (std::vector<double> _headings, std::vector<double> _time);

 private:
    std::vector<double> velocities;
    std::vector<double> headings;
    std::vector<double> time;
};


#endif  // INCLUDE_VISUALIZATION_HPP_
