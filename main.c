#include <iostream>
#include <gtest/gtest.h>

using namespace std;
int add(int a, int b)
{
    return a+b;
}
TEST(add,positive)
{
    ASSERT_EQ(10,add(4,6));
}
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    RUN_ALL_TESTS();
    return 0;
}