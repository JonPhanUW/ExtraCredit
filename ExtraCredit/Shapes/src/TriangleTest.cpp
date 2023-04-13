#include "TestHarness.h"

#include "Triangle.h"

TEST(triangleTest01, defaultTriangle)
{
	std::stringstream testStream;
	Triangle triangleTest;
	testStream << triangleTest; 
	CHECK_EQUAL("draw triangle: 0,0,0,0,0,0 ",testStream.str())
}
TEST(triangleTest02, customTriangle)
{
	std::stringstream testStream;
	Triangle triangleTest(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6), testStream);
	testStream << triangleTest;
	CHECK_EQUAL("draw triangle: 11.1,22.2,33.3,44.4,55.5,66.6 ", testStream.str())
}
TEST(triangleTest03, streamFuncTest)
{
	std::stringstream testStream;
	Triangle triangleTest(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6), testStream);
	triangleTest.stream(testStream);
	CHECK_EQUAL("draw triangle: 11.1,22.2,33.3,44.4,55.5,66.6 ", testStream.str())
}

TEST(triangleTest04, getFuncTest)
{
	std::stringstream testStream;
	Triangle triangleTest(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6), testStream);
	Point ptTest1 = triangleTest.getV1();
	Point ptTest2 = triangleTest.getV2();
	Point ptTest3 = triangleTest.getV3();

	CHECK_EQUAL(11.1, ptTest1.getX())
	CHECK_EQUAL(33.3, ptTest2.getX())
	CHECK_EQUAL(55.5, ptTest3.getX())

	CHECK_EQUAL(22.2, ptTest1.getY())
	CHECK_EQUAL(44.4, ptTest2.getY())
	CHECK_EQUAL(66.6, ptTest3.getY())

}