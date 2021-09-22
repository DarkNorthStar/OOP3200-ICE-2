#include "CartesianPoint.h"
#include <sstream> 			// stringstream
#include <cmath>			// sqrt()
#include <limits>			// INT_MAX

// Class definition section
// CartesianPoint constructor
CartesianPoint::CartesianPoint(const int x, const int y): m_x(x), m_y(y)
{
	// Sets the points x and y
	//SetPoint(x, y);
}
// Destructor
CartesianPoint::~CartesianPoint()
= default;

CartesianPoint::CartesianPoint(const CartesianPoint& point_to)
{
	SetPoint(point_to.GetX(), point_to.GetY());
}

// OPERATION OVERLOADS
double CartesianPoint::operator-(const CartesianPoint& point_to) const
{
	//	difference between x values
	const int xDelta = point_to.GetX() - m_x;
	//	difference between y values
	const int yDelta = point_to.GetY() - m_y;
	//	return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}
// Returns true if 2 points are equal
bool CartesianPoint::operator==(const CartesianPoint& point_to) const
{
	return(((*this).GetX() == point_to.GetX()) && ((*this).GetY() == point_to.GetY()));
}
// Copys one point to another
CartesianPoint CartesianPoint::operator=(const CartesianPoint& new_point)
{
	SetX(new_point.GetX());
	SetY(new_point.GetY());
	return *this;
}

// Adds two points together and returns new point
CartesianPoint CartesianPoint::operator+(const CartesianPoint& point_to) const
{
	CartesianPoint tempPoint(GetX() + point_to.GetX(), GetY() + point_to.GetY());
	return tempPoint;
}

// FRIEND OVERLOADS
std::ostream& operator<<(std::ostream& out, const CartesianPoint& point)
{
	out << point.ToString();
	return out;
}

std::istream& operator>>(std::istream& in, CartesianPoint& point)
{
	in >> point.m_x;
	in.ignore();
	in >> point.m_y;

	return in;
}

//-----------------------------------------------------------------------
// ACCESSORS: Used to query the state of the object
// Returns points X value
int CartesianPoint::GetX() const
{
	// returns the points x
	return m_x;
}

// Returns points Y value
int CartesianPoint::GetY() const
{
	// returns the points y
	return m_y;
}


//-----------------------------------------------------------------------
// MUTATOR(S): Used to change the state of the object
// Takes 2 ints and sets the points x and y using SetX() and SetY()
void CartesianPoint::SetPoint(int x, int y)
{
	// Set x
	SetX(x);
	// Set y
	SetY(y);
}
// Takes int and sets the points x to that value
void CartesianPoint::SetX(int x)
{
	// Sets Points X to passed value
	m_x = x;
}
// Takes a int and sets the points y to that value
void CartesianPoint::SetY(int y)
{
	// Sets points Y to passed value
	m_y = y;
}

//-----------------------------------------------------------------------
// METHODS
// GetDistanceTo Method for CartesianPoint class
double CartesianPoint::GetDistanceTo(const CartesianPoint& point_to) const
{
	//	difference between x values
	const int xDelta = point_to.GetX() - m_x;
	//	difference between y values
	const int yDelta = point_to.GetY() - m_y;
	//	return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}

// ToString Method for CartesianPoint class
std::string CartesianPoint::ToString() const
{
	// declare a stringstream object
	std::stringstream strOut;
	// build the string
	strOut << "(" << m_x << ", " << m_y << ")";
	// return the string
	return strOut.str();
}


