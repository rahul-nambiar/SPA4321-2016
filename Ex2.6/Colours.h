/*
 * colors.hpp
 *
 *  Created on: 1 Feb 2015
 *      Author: Jon
 */

#ifndef COLORS_HPP_
#define COLORS_HPP_

namespace SPA {
enum colors { BLACK=0, RED, GREEN, BLUE, CYAN, MAGENTA, WHITE};

// a simple function to translate an integer input into the appropriate
// FL_Color object
Fl_Color getColor(int i) {
	switch(i) {
	case BLACK:
		return FL_BLACK;
	case RED:
		return FL_RED;
	case GREEN:
		return FL_GREEN;
	case BLUE:
		return FL_BLUE;
	case CYAN:
		return FL_CYAN;
	case MAGENTA:
		return FL_MAGENTA;
	case WHITE:
		return FL_WHITE;
	default:
		return FL_BLACK;
	}
}

}

#endif /* COLORS_HPP_ */
