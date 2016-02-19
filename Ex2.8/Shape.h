/*
 * Shape.hpp
 *
 *  Created on: 8 Feb 2015
 *      Author: Jon
 */

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <vector>
#include "Line.h"

namespace SPA {

class Shape {
public:
	// constructor
	Shape(float xc=0,float yc=0,float angle=0) :
		xc(xc), yc(yc), angle(angle), rotationSpeed(2) {;}
	// destructor
	virtual ~Shape();

	// add a new line to the shape
	void addLine(Line * line) { lines.push_back(line);}

	void setRotationSpeed(float degrees) { rotationSpeed = degrees;}
	float getRotationSpeed() const { return rotationSpeed;}

	void draw() const;
	// modify the data when called to change the shape parameters
	void animate(); // not const this is where we change stuff
	 // handle keyboard events
	void handle(int event); // not const we change stuff here too
private:

	float xc;
	float yc;
	float angle;
	float rotationSpeed;
	std::vector<Line *> lines;

};
}/* namespace SPA */

#endif /* SHAPE_HPP_ */
