/** main.cpp
 *
 *	In this example program, did the following:
 *		- Examined a simple class with 'instance' data-members, a constructor, accessors, mutators.
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
	CartesianPoint origin = CartesianPoint(0, 0);
	// a point called 'destination'
	CartesianPoint destination = CartesianPoint(0, 0);
	


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
		distance = origin.GetDistanceTo(destination);

		// Output 
		// Show the points and the distance
		std::cout << std::fixed << std::setprecision(3); // formatting
		std::cout << "\nThe distance between " << origin.ToString()
			<< " and " << destination.ToString() << " is "
			<< distance << ", " << std::endl;

	}

	catch (std::exception& ex)
	{
		std::cerr << ex.what() << " Ending the program." << std::endl;
	}

	// done.
	std::cout << std::endl << std::endl;
	return 0;
} // end of main()




