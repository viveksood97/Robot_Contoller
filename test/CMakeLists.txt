set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    testAckermann.cpp
    testPID.cpp
    testTwoWDRobot.cpp
    testVisualization.cpp
    ../app/ackermann.cpp
    ../app/pid.cpp
    ../app/twoWDRobot.cpp
    ../app/visualization.cpp
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include ../vendor/googletest/googlemock/include)
target_link_libraries(cpp-test PUBLIC gtest gmock ${Boost_LIBRARIES})