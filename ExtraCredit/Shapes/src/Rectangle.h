#pragma once

#include "Shape.h"
#include "Point.h"

class Rectangles : public Shape
{
public:
	Rectangles(const Point& v1, const Point& v2, std::ostream& canvas)
		: vertex1(v1), vertex2(v2), myCanvas(&canvas)
	{
	}


	Rectangles() = default; 


	const Point& getV1() const;
	const Point& getV2() const;

	void draw() const override;
	void stream(std::ostream& os) const override;


private:

	Point vertex1;
	Point vertex2;
	std::ostream* myCanvas;

};