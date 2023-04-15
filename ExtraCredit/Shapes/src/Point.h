#pragma once

#include "Shape.h"
#include <ostream>

class  Point
{
	
public:

	Point() = default;

	Point(double inputX, double inputY)
	: pointX(inputX), pointY(inputY)
	{
	}

	double getX()const;
	double getY()const;

	void setX(double x);
	void setY(double y);

private:
	double pointX=0;
	double pointY=0;

};