#pragma once
#include "ProjectCode_API.h"

#include <ostream>

class  Shape
{
public:
	Shape() = default;

	Shape(const Shape& src) = delete;

	Shape& operator=(const Shape& rhs) = delete;

    virtual ~Shape() = default;


	virtual void draw() const = 0;
	virtual void stream(std::ostream& os) const = 0;

	enum class Color { red, green, blue, alpha };

	virtual void setColor(Color inputColor)
	{
		m_color = inputColor;
	}

	virtual Color getColor()
	{
		return m_color;
	}

private:
	Color m_color = Color::alpha; 
};

inline std::ostream& operator<<(std::ostream& out, Shape::Color colorInput)
{
	switch (colorInput)
	{
	case Shape::Color::alpha: out << "alpha"; break;
	case Shape::Color::red: out << "red"; break;
	case Shape::Color::blue: out << "blue"; break;
	case Shape::Color::green: out << "green"; break;
	}
	return out; 
}



// Use the virtual stream operator of the shape. This way a single override of operator<<() for shape
// correctly streams all subclasses
inline std::ostream& operator<<(std::ostream& os, const Shape& shape)
{
	shape.stream(os);
	return os;
}




// In a real graphics application, draw would be prototyped as:
// virtual void draw() const = 0;
// and would draw the shape on the computer screen.
//
// C++ does not have a standard graphics library. Thus for class
// we will implement draw by streaming the coordinates to an ostream. The ostream is passed as a parameter
// to the derived class constructors