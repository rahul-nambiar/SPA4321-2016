/*
 * Line.hpp
 *
 *  Created on: 8 Feb 2015
 *      Author: Jon
 */

#ifndef LINE_HPP_
#define LINE_HPP_
#include <FL/Fl.h>
#include <FL/Fl_Window.H>
#include <FL/fl_draw.h>
#include <cmath>


namespace SPA {
class Point {
public:
	Point(float x = 0, float y = 0) :
			x(x), y(y) {
		;
	}
	float x;
	float y;
};

class Line {
public:
	Line() : color(FL_BLACK){
		;
	}
	void addPoint(Point p) {
		points.push_back(p);
	}
	void clear() {
		points.clear();
	}
	void draw() {
		Fl_Color oldcolor = fl_color();
		fl_color(color);
		fl_begin_line();
		for (int i = 0, n = points.size(); i < n; ++i) {
			Point & p = points[i];
			fl_vertex(round(p.x), round(p.y));
		}
		fl_end_line();
		fl_color(oldcolor);

	}

	void setColor(Fl_Color col) {
		color = col;
	}

	int size() {
		return points.size();
	}

private:
	Fl_Color color;
	std::vector<Point> points;
};

}

#endif /* LINE_HPP_ */
