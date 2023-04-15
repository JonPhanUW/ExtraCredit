// DerivedShapes.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>

#include "DerivedShapes.h"
#include "Shape.h"
#include "Rectangle.h"



 Rectangles* generateRedRectangle()
{

	auto const redRect = new Rectangles; 
	redRect->setColor(Shape::Color::red);
	return redRect; 
}


 Rectangles* generateBlueRectangle()
{

	auto const blueRect = new Rectangles;
	blueRect->setColor(Shape::Color::blue);
	return blueRect;
}


 int MeaningOfLife()
{
	return 42; 
}




