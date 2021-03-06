// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.

/// @file   visualization.cpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood

#include "visualization.hpp"
#include "gnuplot-iostream.h"

#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

Visualization::Visualization() {
  targetVelocity = 0;
  targetHeading = 0;
}
Visualization::~Visualization() {}


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
  currentVelocity << " m/s" << " Target: "
  << targetVelocity << " m/s" << std::endl;
  std::cout<< GREEN << "[Heading] " << RESET << "Current: "<<
  currentHeading << " deg" << " Target: " << targetHeading
  << " deg\n" << std::endl;
  return true;
}

bool Visualization::plotHeadings
(const std::vector<std::pair<double, double>>& headings) {
    Gnuplot gp;
    gp << "set xrange [0:10]\nset yrange [0:100]\n";
    gp << "set title \"Heading Convergence\"\n";
    gp << "set pointsize 1\n";
    gp << "set xlabel \"Time\"\n";
    gp << "set ylabel \"Current Heading\"\n";
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

