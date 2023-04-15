#include "Rectangle.h"

const Point& Rectangle::getV1() const
{
	return vertex1;
}
const Point& Rectangle::getV2() const
{
	return vertex2;
}


void Rectangle::draw() const
{
	this->stream(*myCanvas);
}

void Rectangle::stream(std::ostream& os) const
{
	os << "draw rectangle: "
		<< vertex1.getX() << "," << vertex1.getY() << ","
		<< vertex2.getX() << "," << vertex2.getY() 
		<< " ";
}