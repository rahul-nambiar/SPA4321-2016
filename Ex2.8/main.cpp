/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"
#include "Colours.h"
#include <cmath>
#include "Line.h"
using namespace SPA;


int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test",24);
	Fl::visual(FL_DOUBLE | FL_INDEX);

	// Add code here to draw things
	Shape * shape = new Shape(250,250,0);
	Shape * shape1 = new Shape(250,250,45);
	shape->setRotationSpeed(2);
	shape1->setRotationSpeed(-2);// initial rotation speed in degrees
	// make a new line
	Line * line = new Line();
	Line * line1 = new Line();
	// allowed colours are specified in the enum in Colours.hpp
	line->setColor(getColor(BLACK));
	line1->setColor(getColor(RED));
	// add a point to the line
	// these points are all relative to the centre of the Shape
	line->addPoint(Point(-100,-100));
	line->addPoint(Point(100,-100));
	line->addPoint(Point(100,100));
	line->addPoint(Point(-100,100));
	line->addPoint(Point(-100,-100));

	line1->addPoint(Point(-50,-50));
	line1->addPoint(Point(50,-50));
	line1->addPoint(Point(50,50));
	line1->addPoint(Point(-50,50));
	line1->addPoint(Point(-50,-50));
	// add this line to the shape
	shape->addLine(line);
	shape1->addLine(line1);
	// add the shape to the window
	window.addShape(shape);
	window.addShape(shape1);
	// notice the use of . notation for the window
	// and contrast with the use of -> notation for the shape and line

	// add your code here!


	////////
	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


