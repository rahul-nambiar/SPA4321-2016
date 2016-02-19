/*
 * Window.cpp
 *
 *  Created on: 25 Jan 2015
 *      Author: Jon
 */



#include "Window.h"

namespace SPA {

Window::~Window() {;}

int Window::handle(int event) {
	if( event == FL_KEYBOARD) {
		// propagate down to shapes
		for( int i =0,n=shapes.size();i<n;++i) {
			Shape * shape = shapes[i];
			shape->handle(event);
		}
		return 1;

	}
	return 0;
}

}
