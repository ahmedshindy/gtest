#include <gtest/gtest.h>
#include "LibraryCode.hpp"

TEST(TestSuiteSample,TestSample)
{
    int sum = add(3,4);

    ASSERT_EQ(7,sum);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
    
}