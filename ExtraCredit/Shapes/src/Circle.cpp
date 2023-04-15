#include "Circle.h"

const Point& Circle::getV1() const
{
	return vertex1;
}

const double& Circle::getRadius() const
{
	return myRadius;
}

void Circle::draw() const
{
	this->stream(*myCanvas);
}

void Circle::stream(std::ostream& os) const
{
	os << "draw circle: "
		<< vertex1.getX() << "," << vertex1.getY() << ","
		<< myRadius
		<< " ";
}