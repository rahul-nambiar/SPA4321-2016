#include <iostream>
#include <fstream>
#include "Window.h"
#include "Colours.h"
#include "functions.h"
#include <vector>

using namespace std;

//-- JDM no comments -0.5
//-- JDM no print to console -1

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

	int n;
	vector<float> xvec;
	vector<float> yvec;

	ifstream InputFile("../../points3.dat");

for (int j = 0; j < 2; ++j) {
		InputFile >> n;
		readPoints(n,xvec,yvec,InputFile);
		drawPoints(window,xvec,yvec);
		window.stopLine();
	if (InputFile.eof())
		{
			break;
		}
	}

//	 * Here are some of the options
//	 * window.startLine(float x, float y) start a new line from location (x,y)
//	 * window.setAngle(float angle) to set the initial ang of the pen in degrees
//	 * window.rotateDegrees(float angle) rotate the pen in degrees
//	 * window.forward(float distance) move the pen forward
//	 * window.stopLine() to stop the current line
//	 * window.addPoint(float x, float y) add a point to the current line
//	 * window.addPoint(Point p) add a point to the current line
//	 * window.setColor(FL_Color c) set the colour for the next line

	window.show(argc,argv);
	return Fl::run();
}


