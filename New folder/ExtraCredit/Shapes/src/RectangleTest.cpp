#include "TestHarness.h"

#include "Rectangle.h"

TEST(rectangleTest01, defaultrectangle)
{
	std::stringstream testStream;
	Rectangle rectangleTest;
	testStream << rectangleTest;
	CHECK_EQUAL("draw rectangle: 0,0,0,0 ", testStream.str())
}
TEST(rectangleTest02, customrectangle)
{
	std::stringstream testStream;
	Rectangle rectangleTest(Point(11.1, 22.2), Point(33.3, 44.4), testStream);
	testStream << rectangleTest;
	CHECK_EQUAL("draw rectangle: 11.1,22.2,33.3,44.4 ", testStream.str())
}
TEST(rectangleTest03, streamFuncTest)
{
	std::stringstream testStream;
	Rectangle rectangleTest(Point(11.1, 22.2), Point(33.3, 44.4), testStream);
	rectangleTest.stream(testStream);
	CHECK_EQUAL("draw rectangle: 11.1,22.2,33.3,44.4 ", testStream.str())
}

TEST(rectangleTest04, getFuncTest)
{
	std::stringstream testStream;
	Rectangle rectangleTest(Point(11.1, 22.2), Point(33.3, 44.4), testStream);
	Point ptTest1 = rectangleTest.getV1();
	Point ptTest2 = rectangleTest.getV2();
	

	CHECK_EQUAL(11.1, ptTest1.getX())
	CHECK_EQUAL(33.3, ptTest2.getX())

	CHECK_EQUAL(22.2, ptTest1.getY())
	CHECK_EQUAL(44.4, ptTest2.getY())

}