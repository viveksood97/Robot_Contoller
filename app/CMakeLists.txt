add_executable(shell-app pid.cpp ackermann.cpp twoWDRobot.cpp visualization.cpp ../lib/src/pbPlots.cpp ../lib/src/supportLib.cpp main.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/lib/include
)