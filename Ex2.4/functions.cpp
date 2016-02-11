#include "functions.h"
#include <cmath>

void makePolygonCircle(SPA::Window&window,int sides,int radius,int x,int y){

    int a = (180*(sides-2))/sides;
    float b = (M_PI/180)*(a/2);
    float h = cos(b)*radius; //HALF SIDE LENGTH

    int x1 = x-(h/2);
    int y1 = y-((h/2)*tan(b));

    window.startLine(x1,y1);
    window.setAngle(0);
    window.forward(h);

    for (int i = 0; i <(sides -1); ++i) {

        window.rotateDegrees(360/sides);
        window.forward(h);
    }
    window.stopLine();

}