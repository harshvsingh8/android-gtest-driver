
#include "gtest/gtest.h"


TEST(Case1, Test1)
{
    EXPECT_TRUE(true);
}

TEST(Case1, Test2)
{
    EXPECT_TRUE(true);
}

TEST(Case1, Test3)
{
    EXPECT_FALSE(false);
}


TEST(Case2, Test1)
{
    EXPECT_TRUE(true);
}

TEST(Case2, Test2)
{
    EXPECT_TRUE(false);
}

TEST(Case2, Test3)
{
    EXPECT_TRUE(true);
}

TEST(Case3, Test1)
{
    EXPECT_TRUE(true);
}

TEST(Case3, Test2)
{
    EXPECT_TRUE(false);
}
