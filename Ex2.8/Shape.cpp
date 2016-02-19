/*
 * Shape.cpp
 *
 *  Created on: 8 Feb 2015
 *      Author: Jon
 */

#include "Shape.h"
#include "FL/FL.h"

namespace SPA {


Shape::~Shape() {
	// doesn't do anything since we don't need to clean anything up
}

void Shape::draw() const {

	fl_push_matrix();
	fl_translate(xc,yc);
	fl_rotate(angle);
	for(int i =0,n=lines.size();i<n;++i) {
		Line * l = lines[i];
		l->draw();
	}
	fl_pop_matrix();
}

void Shape::animate() {
	angle = angle+rotationSpeed;
}

void Shape::handle(int event) {
	// check for keyboard events
	if( event == FL_KEYBOARD) {
		if( Fl::event_key() == FL_Up) {
			rotationSpeed++;
		} else if( Fl::event_key() == FL_Down) {
			rotationSpeed--;
		}
	}
}

}
