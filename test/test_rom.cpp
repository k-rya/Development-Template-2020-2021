#include "rom.h"

#include <gtest.h>


TEST(test_convertor, testrom_1)
{
	arabic arab(1);
	roman v;
	Convertor c;
	v = c.toRoman(arab);
	
	EXPECT_EQ("I", v.value);
}
TEST(test_convertor, testrom_5)
{
	arabic arab(5);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("V", v.value);
}
TEST(test_convertor, testrom_10)
{
	arabic arab(10);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("X", v.value);
}
TEST(test_convertor, testrom_50)
{
	arabic arab(50);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("L", v.value);
}
TEST(test_convertor, testrom_4)
{
	arabic arab(4);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("IV", v.value);
}
TEST(test_convertor, testrom_9)
{
	arabic arab(9);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("IX", v.value);
}
TEST(test_convertor, testrom_49)
{
	arabic arab(49);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("XLIX", v.value);
}
TEST(test_convertor, testrom_6)
{
	arabic arab(6);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("VI", v.value);
}
TEST(test_convertor, testrom_11)
{
	arabic arab(11);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("XI", v.value);
}
TEST(test_convertor, testrom_51)
{
	arabic arab(51);
	roman v;
	Convertor c;
	v = c.toRoman(arab);

	EXPECT_EQ("LI", v.value);
}
TEST(test_convertor, testarab_1)
{
	arabic arab;
	roman v("I");
	Convertor c;
	arab= c.toArabic(v);

	EXPECT_EQ(1, arab.value);
}
TEST(test_convertor, testarab_5)
{
	arabic arab;
	roman v("V");
	Convertor c;
	arab = c.toArabic(v);

	EXPECT_EQ(5, arab.value);
}
TEST(test_convertor, testarab_10)
{
	arabic arab;
	roman v("X");
	Convertor c;
	arab = c.toArabic(v);

	EXPECT_EQ(10, arab.value);
}
