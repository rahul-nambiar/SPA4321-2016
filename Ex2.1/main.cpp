/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"



int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

// X and Y axis:
	window.startLine(250,0);
	window.setAngle(90);
	window.forward(500);
	window.stopLine();

	window.startLine(0,250);
	window.setAngle(0);
	window.forward(500);
	window.stopLine();

	int n = 3;
float pi = 3.14159;

	int a = (180*(n-2))/n;
	float b = (pi/180)*(a/2);

int l=200;
int x1 = 250-(l/2);
int y1 = 250-((l/2)*tan(b));

	window.startLine(x1,y1);
	window.setAngle(0);
	window.forward(200);

	for (int i = 0; i <n; ++i) {

		window.rotateDegrees(360/n);
		window.forward(200);
	}
		window.stopLine();
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

