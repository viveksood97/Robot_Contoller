// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   pid.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-16

#include "visualization.hpp"
#include "gnuplot-iostream.h"

#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

bool Visualization::setTargetHeading(double h) {
  targetHeading = h;
  return true;
}
bool Visualization::setTargetVelocity(double v) {
  targetVelocity = v;
  return true;
}
bool Visualization::printOutputs
(double currentHeading, double currentVelocity) {
  std::cout << GREEN << "[Velocity] " << RESET << "Current: "<<
  currentVelocity << " Target: " << targetVelocity << std::endl;
  std::cout<< GREEN << "[Heading] " << RESET << "Current: "<<
  currentHeading << " Target: " << targetHeading << "\n" << std::endl;
  return true;
}

bool Visualization::plotHeadings
(const std::vector<std::pair<double, double>>& headings) {
    Gnuplot gp;
    gp << "set xrange [0:10]\nset yrange [0:100]\n";
    gp << "set title \"Steering angle Convergence\"\n";
    gp << "set pointsize 1\n";
    gp << "set xlabel \"Time\"\n";
    gp << "set ylabel \"Heading Angle\"\n";
    gp << "set key outside\n";
    gp << "plot" << gp.file1d(headings) << "with points title 'Heading' lc 3, "
    << targetHeading << " title 'Target Heading' lt 1 lc 4" << std::endl;
    return true;
}

bool Visualization::plotVelocities
(const std::vector<std::pair<double, double>>& velocities) {
    Gnuplot gp;
    gp << "set xrange [0.005:0.01]\nset yrange [0:45]\n";
    gp << "set title \"Velocity Convergence\"\n";
    gp << "set pointsize 1\n";
    gp << "set xlabel \"Time\"\n";
    gp << "set ylabel \"Current Velocity\"\n";
    gp << "set key outside\n";
    gp << "plot" << gp.file1d(velocities)
       << "with lp title 'Current Velocity' lc 3, "
       << targetVelocity << " title 'Set Point' lt 1 lc 4" << std::endl;
    return true;
}

