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

// TRIANGLE
	int c = 250;
	int n = 3;
	float nf = n;
float pi = 3.14159;

	int a = (180*(n-2))/n;
	float b = (pi/180)*(a/2);

	std::cout << a << std::endl << b << std::endl << n << std::endl << pi << std::endl;

int l=200;
int x1 = c-(l/2);
int y1 = c-((l/2)*tan(b));

	window.startLine(x1,y1);
	window.setAngle(0);
	window.forward(l);

	for (int i = 0; i <(n-1); ++i) {

		window.rotateDegrees(360/nf);
		window.forward(l);
	}
		window.stopLine();
	// Add code here to draw things

	// PENTAGON

	int n2 = 5;
	float n2f = n2;

	int a2 = (180*(n2-2))/n2;
	float b2 = (pi/180)*(a2/2);

	std::cout << a2 << std::endl << b2 << std::endl << n2 << std::endl << pi << std::endl;

	int l2=250;
	int x2 = c-(l2/2);
	int y2 = c-((l2/2)*tan(b2));

	window.startLine(x2,y2);
	window.setAngle(0);
	window.forward(l2);

	for (int i = 0; i <(n2-1); ++i) {

		window.rotateDegrees(360/n2f);
		window.forward(l2);
	}
	window.stopLine();

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


