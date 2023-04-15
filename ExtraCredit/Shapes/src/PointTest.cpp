#include "TestHarness.h"
#include "Point.h"
#include <sstream>


TEST(pointTest01, defaultPoint)
{
	Point pointTest;
	CHECK_EQUAL(0, pointTest.getX())
	CHECK_EQUAL(0, pointTest.getY())
}

TEST(pointTest02, customPoints)
{
	Point pointTest(3.14,-42);
	CHECK_EQUAL(3.14, pointTest.getX())
	CHECK_EQUAL(-42, pointTest.getY())
}

TEST(pointTest03, setPoints)
{
	Point pointTest(3.14, -42);
	pointTest.setX(21);
	pointTest.setY(9000);
	CHECK_EQUAL(21, pointTest.getX(), 21)
	CHECK_EQUAL(9000, pointTest.getY())
}