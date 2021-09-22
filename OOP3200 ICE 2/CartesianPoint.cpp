#include "CartesianPoint.h"
#include <sstream> 			// stringstream
#include <cmath>			// sqrt()
#include <limits>			// INT_MAX

// Class definition section
// CartesianPoint constructor
CartesianPoint::CartesianPoint(int x, int y)
{
	// Sets the points x and y
	SetPoint(x, y);
}
// Destructor
CartesianPoint::~CartesianPoint()
= default;

// OPERATION OVERLOADS
double CartesianPoint::operator-(const CartesianPoint& point_to) const
{
	//	difference between x values
	const int xDelta = point_to.myX - myX;
	//	difference between y values
	const int yDelta = point_to.myY - myY;
	//	return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}


//-----------------------------------------------------------------------
// ACCESSORS: Used to query the state of the object
// Returns points X value
int CartesianPoint::GetX() const
{
	// returns the points x
	return myX;
}

// Returns points Y value
int CartesianPoint::GetY() const
{
	// returns the points y
	return myY;
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
	myX = x;
}
// Takes a int and sets the points y to that value
void CartesianPoint::SetY(int y)
{
	// Sets points Y to passed value
	myY = y;
}

//-----------------------------------------------------------------------
// METHODS
// GetDistanceTo Method for CartesianPoint class
double CartesianPoint::GetDistanceTo(const CartesianPoint& point_to) const
{
	//	difference between x values
	const int xDelta = point_to.myX - myX;
	//	difference between y values
	const int yDelta = point_to.myY - myY;
	//	return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}

// ToString Method for CartesianPoint class
std::string CartesianPoint::ToString() const
{
	// declare a stringstream object
	std::stringstream strOut;
	// build the string
	strOut << "(" << myX << ", " << myY << ")";
	// return the string
	return strOut.str();
}