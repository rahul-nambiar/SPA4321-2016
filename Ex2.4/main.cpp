/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"
#include "functions.h"


int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(600,600,"My Test");

	// Add code here to draw things
	for (int i = 3; i < 8; ++i) {
		makePolygonCircle(window,i,200,300,300);
	}
makePolygonCircle(window,400,200,300,300);
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


