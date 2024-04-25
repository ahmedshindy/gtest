#include <iostream>

using namespace std;
int add(int a, int b)
{
    return a+b;
}
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    RUN_ALL_TESTS();
    return 0;
}