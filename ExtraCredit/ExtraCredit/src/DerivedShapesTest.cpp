#include <iostream>
#include "Shape.h"
#include "TestHarness.h"
#include"DerivedShapes.h"

// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>


TEST(test01, verifyRedColor)
{
	std::stringstream testStream;

	Rectangles* redRectPtr = generateRedRectangle();
	testStream << redRectPtr->getColor();

	CHECK_EQUAL("red", testStream.str())
		std::cout << "this rectangle is " << testStream.str()<<"\n\n";

}

TEST(test02, verifyBlueColor)
{
	std::stringstream testStream;

	Rectangles* blueRectPtr = generateBlueRectangle();
	testStream << blueRectPtr->getColor();

	CHECK_EQUAL("blue", testStream.str())
		std::cout << "this rectangle is " << testStream.str() << "\n\n";
}


TEST(test03, testMeaningOfLife)
{
	const int testInt = MeaningOfLife();
	CHECK_EQUAL(42, testInt)
		std::cout << "this meaning of life is " <<testInt << "\n\n";
}

