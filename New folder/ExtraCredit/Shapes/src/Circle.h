#pragma once

#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{
public:
	Circle(const Point& v1,const double& radius, std::ostream& canvas)
		: vertex1(v1), myRadius(radius), myCanvas(&canvas)
	{
	}

	Circle() = default;


	const Point& getV1() const;
	const double& getRadius() const;

	void draw() const override;
	void stream(std::ostream& os) const override;


private:

	Point vertex1;
	double myRadius; 
	std::ostream* myCanvas;

};