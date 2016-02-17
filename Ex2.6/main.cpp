#include <iostream>
#include <fstream>
#include "Window.h"
#include "Colours.h"

using namespace std;

int main(int argc, char * argv[]) {
	SPA::Window window(500,500,"My Test");

	// Add code here to draw things
ifstream InputFile("C:/Users/Rahul/ClionProjects/ap15114/Ex2.6/points2.dat");
	int npoints;
	InputFile >> npoints;

	float x,y;
	for (int i = 0; i < npoints; ++i) {

		if (npoints>5){
			return 0;
		}
	else {
			InputFile >> x >> y;
			window.addPoint(x, y);
			cout << x << " " << y << endl;
		}
	}
	window.stopLine();
	/*
	 * Here are some of the options
	 * window.startLine(float x, float y) start a new line from location (x,y)
	 * window.setAngle(float angle) to set the initial ang of the pen in degrees
	 * window.rotateDegrees(float angle) rotate the pen in degrees
	 * window.forward(float distance) move the pen forward
	 * window.stopLine() to stop the current line
	 * window.addPoint(float x, float y) add a point to the current line
	 * window.addPoint(Point p) add a point to the current line
	 * window.setColor(FL_Color c) set the colour for the next line
*/

	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


