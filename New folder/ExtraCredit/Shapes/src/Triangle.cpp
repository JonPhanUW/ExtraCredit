#include "Triangle.h"



const Point& Triangle::getV1() const
{
	return vertex1;
}
const Point& Triangle::getV2() const
{
	return vertex2;
}

const Point& Triangle::getV3() const
{
	return vertex3;
}

void Triangle::draw() const
{
	
	this->stream(*myCanvas);
	
}

void Triangle::stream(std::ostream& os) const
{
	os << "draw triangle: "
	<< vertex1.getX() << "," << vertex1.getY() << ","
	<< vertex2.getX() << "," << vertex2.getY() << ","
	<< vertex3.getX() << "," << vertex3.getY()
	<<" ";
}


