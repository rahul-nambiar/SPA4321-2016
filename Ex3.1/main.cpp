#include <iostream>
#include "functions.h"
#include "random.h"
#include <cmath>

using namespace std;

int main() {

    bool t1 = test1();
    if (t1){
        cout << "Test 1 SUCCESS" << endl;
    }
    else {
        cout << "Test 1 FAILED" << endl;
    }

    bool t2 = test2();
    if (t2){
        cout << "Test 2 SUCCESS" << endl;
    }
    else {
        cout << "Test 2 FAILED" << endl;
    }

    double speed = 10.0;
    double distance = 5.0;
    double g = 10.0;

    double nominalAngle = angle(distance,speed);
    cout << nominalAngle << endl;

    double pi = 3.141592654;
    double deltaAngle = Random::randomNorm(0,(2*(pi/180)));

    double actualAngle = nominalAngle + deltaAngle;
    cout << actualAngle << endl;

    return 0;
}