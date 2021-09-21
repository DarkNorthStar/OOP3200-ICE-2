#pragma once
#ifndef __CARTESIAN_POINT__
#define __CARTESIAN_POINT__
#include <string>

//Class declaration section
class CartesianPoint
{
public:
	//-----------------------------------------------------------------------
	// CONSTRUCTORS: Used to initialize objects
	CartesianPoint(int x = 1, int y = 1);
	// Destructor
	~CartesianPoint();

	// OPERATION OVERLOADS
	// Videos left off here at 37:21

	//-----------------------------------------------------------------------
	// ACCESSORS: Used to query the state of the object
	// get x
	int GetX() const;
	// get y
	int GetY() const;


	//-----------------------------------------------------------------------
	// MUTATOR(S): Used to change the state of the object
	// set x
	void SetX(int x);
	// set y,
	void SetY(int y);
	// set point (both x and y)
	void SetPoint(int x, int y);


	//-----------------------------------------------------------------------
	// METHODS
	// get the distance between this point and a second point
	double GetDistanceTo(const CartesianPoint& point_to) const;
	// convert the obj to a string
	std::string ToString() const;


private:
	// private data members for the dimensions of the point
	int myX; // x-axis (horizontal) value
	int myY;  // y-axis (vertical) value

};


#endif /*Defined (__CARTESIAN_POINT__)*/

