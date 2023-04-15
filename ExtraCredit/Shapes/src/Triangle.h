#pragma once

#include "Shape.h"
#include "Point.h"


class  Triangle : public Shape
{
public:
	
	Triangle(const Point& v1, const Point& v2, const Point& v3, std::ostream& canvas)
		: vertex1(v1), vertex2(v2), vertex3(v3), myCanvas(&canvas)
	{
	}

	Triangle() = default;

	const Point& getV1() const;
	const Point& getV2() const;
	auto getV3() const -> const Point&;


	void draw() const override;
	void stream(std::ostream& os) const override;


private:

	Point vertex1;
	Point vertex2;
	Point vertex3;
	
	std::ostream* myCanvas;
};

