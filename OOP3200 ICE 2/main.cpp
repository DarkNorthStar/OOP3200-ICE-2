/** main.cpp
 *
 *	In this example program, did the following:
 *		- Examined a simple class with 'instance' data-members, a constructor, accessors, mutators.
 *		- Now with overrides and overloads
 *
 *	@author		Tyler Osborne
 *	@studentID  100757532
*/

#include <iostream> 		// cin, cout
#include <iomanip>			// fixed, setprecision()
#include <stdexcept>		// out_of_range
#include "CartesianPoint.h"
#include "MyconsoleInput.h" // ConsoleInput::ReadInteger()


// main() function
int main()
{
	// Declarations
	// a point called 'origin', initialized to 0, 0
	CartesianPoint origin = CartesianPoint(10, 20);
	// a point called 'destination'
	CartesianPoint destination;
	

	int inputX; // temporary input variable for x
	int inputY; // temporary input variable for y
	// to store the distance between two points
	double distance;

	try
	{
		// Input
		// Prompt the user for the coordinates
		std::cout << "\nEnter coordinates of the destination point: " << std::endl;
		// prompt for, read, and store x coordinate:
		std::cout << "X: ";
		inputX = ConsoleInput::ReadInteger();
		destination.SetX(inputX);

		// prompt for, read, and store y coordinate:
		std::cout << "Y: ";
		inputY = ConsoleInput::ReadInteger();
		destination.SetY(inputY);

		// Processing
		// determine the distance between the two points
		//distance = origin.GetDistanceTo(destination);
		distance = origin - destination; // Replaces getDistanceTo() overload

		// if origin is equal to destination
		std::cout << "origin is equal to destination?: " << std::to_string(origin == destination) << std::endl;

		CartesianPoint newPoint = origin + destination;
		std::cout << "Origin + Destination = " << newPoint << std::endl;


		

		// Output 
		// Show the points and the distance
		std::cout << std::fixed << std::setprecision(3); // formatting
		std::cout << "\nThe distance between " << origin
			<< " and " << destination << " is "
			<< distance << ", " << std::endl;

		CartesianPoint anotherPoint;
		std::cout << "\nEnter another point: " << std::endl;
		std::cin >> anotherPoint;
		std::cout << "You Entered: " << anotherPoint << std::endl;
	}

	catch (std::exception& ex)
	{
		std::cerr << ex.what() << " Ending the program." << std::endl;
	}

	// done.
	std::cout << std::endl << std::endl;
	return 0;
} // end of main()




