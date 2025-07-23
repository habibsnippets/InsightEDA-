#include <gtest/gtest.h>
#include "InsightEDA/logic.h"

// Test case to check basic arithmetic
TEST(ArithmeticTest, PositiveNumber) {
    // TEST(TestSuiteName, TestName): Defines a test.
    ASSERT_EQ(7, add(3,4));

}

TEST(ArithmeticTest, NegativeNumber){
    ASSERT_EQ(-5, add(-2,-3));
}