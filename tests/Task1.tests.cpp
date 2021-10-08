extern "C"
{
	#include "../include/func.h"
}
#include <gtest/gtest.h>
#include <math.h>

TEST(TestOfz1Andz2, MustBeEqual)
{
	ASSERT_DOUBLE_EQ(z1(1, 5), z2(1, 5));
}
TEST(TestOfFAndG, MustBeEqual)
{
	ASSERT_EQ(f(1, 0, 1), g(1, 0, 1));
}
TEST(TestOfFX, MustBe4)
{
	ASSERT_DOUBLE_EQ(fx(-2.5, 4), 4);
}
TEST(TestOfInside, MustBe3Inside2Outside)
{
	ASSERT_EQ(inside(1, 2, 5), 1);
	ASSERT_EQ(inside(-1, -1, 2), 1);
	ASSERT_EQ(inside(5, 25, 40), 1);
	ASSERT_EQ(inside(5, -5, 1), 0);
	ASSERT_EQ(inside(-1, 10, 15), 0);
}
