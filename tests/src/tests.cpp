#include "math/math.hpp"
#include "core/core.hpp"
#include "utils/utils.hpp"
#include <gtest/gtest.h>

TEST(MathTests, Addition) {
    EXPECT_EQ(math::add(2, 3), 5);
    EXPECT_EQ(math::add(-1, 5), 4);
}

TEST(MathTests, Multiplication) {
    EXPECT_EQ(math::multiply(3, 4), 12);
    EXPECT_EQ(math::multiply(-2, 5), -10);
}

TEST(CoreTests, Factorial) {
    EXPECT_EQ(core::factorial(0), 1);
    EXPECT_EQ(core::factorial(5), 120);
}

TEST(CoreTests, Power) {
    EXPECT_EQ(core::power(2, 3), 8);
    EXPECT_EQ(core::power(5, 0), 1);
}

TEST(UtilsTests, StringTrim) {
    EXPECT_EQ(utils::trim("  hello  "), "hello");
    EXPECT_EQ(utils::trim("\t\ntest\r\n"), "test");
    EXPECT_TRUE(utils::trim("    ").empty());
}

TEST(UtilsTests, LogOutput) {
    testing::internal::CaptureStdout();
    utils::log("Test message");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("[INFO] Test message") != std::string::npos);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}