
#include <stdio.h>
#include <gtest/gtest.h>

TEST(MyTestCaseName, MyTestName) {
    int a = 5;
    ASSERT_EQ(a, 5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
