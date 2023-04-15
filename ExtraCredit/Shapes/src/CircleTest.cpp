#include "TestHarness.h"

#include "Circle.h"

TEST(circleTest01, defaultcircle)
{
	std::stringstream testStream;
	Circle circleTest;
	testStream << circleTest;
	CHECK_EQUAL("draw circle: 0,0,0 ", testStream.str())
}
TEST(circleTest02, customcircle)
{
	std::stringstream testStream;
	Circle circleTest(Point(11.1, 22.2),33.3,  testStream);
	testStream << circleTest;
	CHECK_EQUAL("draw circle: 11.1,22.2,33.3 ", testStream.str())
}
TEST(circleTest03, streamFuncTest)
{
	std::stringstream testStream;
	Circle circleTest(Point(11.1, 22.2), 33.3, testStream);
	circleTest.stream(testStream);
	CHECK_EQUAL("draw circle: 11.1,22.2,33.3 ", testStream.str())
}

TEST(circleTest04, getFuncTest)
{
	std::stringstream testStream;
	Circle circleTest(Point(11.1, 22.2), 33.3, testStream);
	Point ptTest1 = circleTest.getV1();


	CHECK_EQUAL(11.1, ptTest1.getX())

	CHECK_EQUAL(22.2, ptTest1.getY())

	CHECK_EQUAL(33.3, circleTest.getRadius())

}