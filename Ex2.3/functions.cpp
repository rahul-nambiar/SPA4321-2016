//
// Created by ap15114 on 11/02/2016.
//

#include "functions.h"
#include "Window.h"
#include <cmath>

void makePolygon(SPA::Window&window,int sides,int length,int x,int y)
{
    int a = (180*(sides-2))/sides;
    float b = (M_PI/180)*(a/2);

    int x1 = x-(length/2);
    int y1 = y-((length/2)*tan(b));

    window.startLine(x1,y1);
    window.setAngle(0);
    window.forward(length);

    for (int i = 0; i <(sides -1); ++i) {

        window.rotateDegrees(360/sides);
        window.forward(length);
    }
    window.stopLine();

}



