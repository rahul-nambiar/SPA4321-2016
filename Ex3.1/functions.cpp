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
        return theta;
    }
    else {
        return -1;
    }
}

bool testFloat (double value,double test,double p){

    double diff = abs(value-test);

    if (diff<p){
        return 1;
    }
    else{
        return 0;
    }
}

bool test1(){

    double ang = angle(2.5,6.0);
    bool test = testFloat(ang,0.383823,0.000001);

    return test;
}

double impact(double angle, double speed, double distance){

    float g = 10.0;
    double d = distance;
    double v = speed;
    double theta = angle;

    double n1 = d*tan(theta);
    double n3 = (pow(d,2)*g);
    double n4 = (2*pow(v,2))*(pow(cos(theta),2));
    double n2 = n3/n4;
    double h = n1-n2;

    return h;
}

bool test2(){

    double ang = angle(2.5,6.0);
    double height = impact(ang,6.0,2.5);
    bool tf = testFloat(height,0,0.0001);

    if(tf){
        return 1;
    }
    else{
        return 0;
    }
}