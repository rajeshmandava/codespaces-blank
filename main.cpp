
#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace testing;
int main(int argc, char* argv[])
{
    int i{100};
    std::cout << i << "\n";
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}