/*
 * Window.hpp
 *
 *  Created on: 25 Jan 2015
 *      Author: Jon
 */

#ifndef SPAWINDOW_HPP_
#define SPAWINDOW_HPP_

#include <FL/Fl.h>
#include <FL/Fl_Window.H>
#include <FL/fl_draw.h>
#include <vector>
#include <cmath>
#include <iostream>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifndef M_E
#define M_E 2.7182818284590452354
#endif




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

class Window: public Fl_Window {
public:
	Window(int w, int h, const char * l = 0) :
			Fl_Window(h, w, l), currentLine(), currentPoint(0, 0),
			currentColor(FL_BLACK), currentAngle(0) {
	}

	~Window();

	void draw() {
		for (int i = 0, n = lines.size(); i < n; ++i) {
			Line & l = lines[i];
			l.draw();
		}
	}

	void addPoint(const Point & p) {
		addPoint(p.x,p.y);
	}

	void addPoint(double x, double y) {
		if (currentLine.size() == 0) {
			// start a new line
			startLine(round(x), round(y));
		} else {
			Point p(round(x), round(y));
			currentPoint = p;
			currentLine.addPoint(p);
		}
	}

	void setColor(Fl_Color color) { currentColor = color;}

	void startLine(int x, int y) {
		if (currentLine.size() > 0) {
			stopLine();
		}
		//
		currentLine.clear();
		currentLine.setColor(currentColor);
		currentPoint.x = x;
		currentPoint.y = y;
		currentLine.addPoint(currentPoint);
	}

	void stopLine() {
		lines.push_back(currentLine);
		currentLine.clear();
	}

	void setAngle(float angle) {
		currentAngle = angle * M_PI / 180.;
	}

	void forward(float l) {
		Point p;
		p.x = currentPoint.x + l * std::cos(currentAngle);
		p.y = currentPoint.y + l * std::sin(currentAngle);
		currentPoint = p;
		currentLine.addPoint(p);
	}

	// a clockwise rotation
	void rotateDegrees(float angle) {
		float radians = angle * M_PI / 180.;
		currentAngle += radians;
	}

private:
	std::vector<Line> lines;
	Line currentLine;
	Point currentPoint;
	Fl_Color currentColor;
	float currentAngle;
};

}


#endif /* SPAWINDOW_HPP_ */
