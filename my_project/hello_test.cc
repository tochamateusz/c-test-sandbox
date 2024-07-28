#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(TestSuit, SpecificTest) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(TestSuit2, SpecificTest2) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 5, 42);
}
