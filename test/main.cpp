/**
 * @file main.cpp
 * @authors Vivek Sood and Charu Sharma
 * @brief primary source file
 * @date 2021-10-05
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 0 Proposal
 *
 */

#include <gtest/gtest.h>

TEST(dummy, should_pass) {
  EXPECT_EQ(1, 1);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
