#include "Rectangle.h"

const Point& Rectangles::getV1() const
{
	return vertex1;
}
const Point& Rectangles::getV2() const
{
	return vertex2;
}


void Rectangles::draw() const
{
	this->stream(*myCanvas);
}

void Rectangles::stream(std::ostream& os) const
{
	os << "draw rectangle: "
		<< vertex1.getX() << "," << vertex1.getY() << ","
		<< vertex2.getX() << "," << vertex2.getY() 
		<< " ";
}