add_executable(shell-app pid.cpp ackermann.cpp main.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)