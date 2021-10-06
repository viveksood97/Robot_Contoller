# Robot Controller
[![Build Status](https://app.travis-ci.com/viveksood97/Robot_Contoller.svg?branch=main)](https://app.travis-ci.com/viveksood97/Robot_Contoller) 
[![Coverage Status](https://coveralls.io/repos/github/viveksood97/Robot_Contoller/badge.svg?branch=main)](https://coveralls.io/github/viveksood97/Robot_Contoller?branch=main)
[![License: MIT](https://img.shields.io/badge/License-MIT-Default.svg)](https://opensource.org/licenses/MIT)


## Authors
 - Vivek Sood (UID 117504279)
 - Charu Sharma (UID 117555448)

# Overview
In this project we implement a controller for an Ackermann kinematic model with a maximum steering angle constraint (e.g. < 45 degrees) (input robot target heading and velocity, output steering and the two drive wheel velocities, demonstrating convergence to the set points).

## Agile Iterative Process
We have been following the agile methodology in this project to track all the tasks involved. We have been utilizing the notion platform to achieve this which can be seen in the link below:

[Notion Agile Board](https://www.notion.so/ba2e3747132a4b9585c73f50611917ac?v=434d3c71adf3443cb7631cdf5d560166)

## All the necessary links 
- Link for proposal: [proposal](https://drive.google.com/file/d/1wLCBFTQJ4ZTIBm7_OMXAdsh-fdLl33LF/view)
- Link for proposal video: [proposal video](https://drive.google.com/file/d/1G99AhuwNNmJvOoLWowdKSbD6CoMQz3zb/view)
- Link for proposal presentation: [Proposal Presentation](https://docs.google.com/presentation/d/1iLKKHUWsUh4rI2HVl6a0bfbaCnp-vlT2/edit#slide=id.gf6065eecf8_0_326)
- Link for quad chart: [quad chart](https://drive.google.com/file/d/16Bhl7vpuL6NwU_m8zxUkITL6Cl9oWY0c/view)

## Standard install via command-line
```
git clone --recursive https://github.com/viveksood97/Robot_Contoller
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```