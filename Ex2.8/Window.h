/*
 * Window.hpp
 *
 *  Created on: 25 Jan 2015
 *      Author: Jon
 */

#ifndef SPAWINDOW_HPP_
#define SPAWINDOW_HPP_

#include <FL/Fl.h>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.h>
#include <vector>
#include <cmath>
#include <iostream>

#include "Shape.h"




namespace SPA {


class Window: public Fl_Double_Window {
public:
	Window(int w, int h, const char * l = 0, float fps=60) :
			Fl_Double_Window(h, w, l)  {
		// setup animation timer
		f = 1./fps;
		color(FL_WHITE);
		Fl::add_timeout(f, timer_cb, (void *)this);
	}

	~Window();

	void draw() {
		Fl_Double_Window::draw();
		for (int i = 0, n = shapes.size(); i < n; ++i) {
			Shape * s = shapes[i];
			s->draw();
		}
	}

	int handle(int event);

	void animate() {
		for(int i =0,n=shapes.size();i<n;++i) {
			Shape * s = shapes[i];
			s->animate();
		}
	}

	void addShape( Shape * shape) {
		shapes.push_back(shape);
	}

	static void timer_cb(void * data) {
		Window * window = (Window*)data;
		window->animate();
		window->redraw();
		Fl::repeat_timeout(window->f, timer_cb, data);
	}

private:
	std::vector<Shape *> shapes;
	double f; // time between animation frames
};

}


#endif /* SPAWINDOW_HPP_ */
