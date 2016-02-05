/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */
#include <iostream>
#include "Window.h"

using namespace std;

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

	int nSides;
cout << "Enter number of sides: " << endl;
cin >> nSides;

	// Add code here to draw things

	/*
	 * Here are some of the options
	 * window.startLine(float x, float y) start a new line from location (x,y)
	 * window.setAngle(float angle) to set the initial ang of the pen in degrees
	 * window.rotateDegrees(float angle) rotate the pen in degrees
	 * window.forward(float distance) move the pen forward
	 * window.stopLine() to stop the current line
*/

	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


