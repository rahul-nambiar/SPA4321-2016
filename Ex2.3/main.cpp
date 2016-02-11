#include "Window.h"
#include "functions.h"

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

//TRIANGLE
	int sides = 3;
	int length = 100;
	int x = 125;
	int y = 125;

makePolygon(window,sides,length,x,y);

//SQUARE
	int sides2 = 4;
	int length2 = 100;
	int x2 = 125;
	int y2 = 375;

makePolygon(window,sides2,length2,x2,y2);

//PENTAGON
	int sides3 = 5;
	int length3 = 100;
	int x3 = 375;
	int y3 = 375;

makePolygon(window,sides3,length3,x3,y3);

//HEXAGON
	int sides4 = 6;
	int length4 = 100;
	int x4 = 375;
	int y4 = 125;

makePolygon(window,sides4,length4,x4,y4);
	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}