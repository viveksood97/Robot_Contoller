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
    bool setVelocities(std::vector<double> v);
    bool setHeadings(std::vector<double> h);
    bool setTime(std::vector<double> t);

    bool plotVelocities
    (std::vector<double> _velocities, std::vector<double> _time);

    bool plotHeadings
    (std::vector<double> _headings, std::vector<double> _time);

 private:
    std::vector<double> velocities;
    std::vector<double> headings;
    std::vector<double> time;
};


#endif  // INCLUDE_VISUALIZATION_HPP_
