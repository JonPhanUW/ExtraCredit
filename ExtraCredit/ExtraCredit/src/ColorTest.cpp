#include <iostream>
#include <sstream>
#include <memory>
#include "Shape.h"
#include "Triangle.h"
#include "TestHarness.h"
#include "ProjectCode_API.h"

//TEST  (colorTest, color)
//{
//	
//	std::stringstream testStream;
//	//Triangle newTriangle(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6), testStream);
//	Triangle newTriangle;
//	//newTriangle.stream(testStream);
//	//newTriangle.stream(newTriangle.getColor())
//	//std::cout << testStream.str();
//
//	//default color
//	testStream << newTriangle.getColor();
//	//std::cout << testStream.str();
//	CHECK_EQUAL("alpha", testStream.str())
//
//	newTriangle.setColor(Shape::Color::blue);
//	testStream.str("");
//	testStream << newTriangle.getColor();
//	CHECK_EQUAL("blue", testStream.str())
//
//	
//}