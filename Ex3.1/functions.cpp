#include <stdlib.h>
#include <iostream>
#include "functions.h"
#include "cmath"

double angle(double distance, double speed){

    float g = 10.0;
    double d = distance;
    double v = speed;
    double sin2theta = (d*g)/pow(v,2);

    if (sin2theta>-1 && sin2theta<1){
        double theta = (asin(sin2theta))/2;
        std::cout << theta << std::endl;
    }
    else {
        std::cout << -1;
    }
}

bool testFloat (double value,double test,double p){

    double diff = abs(value-test);

    if (diff<p){
        std::cout << true << std::endl;
    }
    else{
        std::cout << false << std::endl;
    }
}

bool test1(){
    double ang = angle(2.5,6.0);
    bool test = testFloat(ang,0.383823,0.000001);
    return test;
}