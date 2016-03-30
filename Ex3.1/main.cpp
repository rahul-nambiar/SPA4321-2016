#include <iostream>
#include "functions.h"
#include "random.h"

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

    double nominalAngle = angle(distance,speed);
    cout << nominalAngle << endl;

    double pi = 3.141592654;
    double sigma1 = (pi/180)*2;

    double deltaAngle = Random::randomNorm(0,sigma1);
    cout << deltaAngle << endl;

    double actualAngle = nominalAngle + deltaAngle;
    cout << actualAngle << endl;

    double deltaSpeed = Random::randomNorm(1,0.1);

    double actualSpeed = speed*deltaSpeed;

    int hits = 0;

    for (int i = 0; i < 10001; ++i) {
        double height = impact(actualAngle,actualSpeed,distance);
        if(height<0.5,height>-0.5){
            hits++;
        }
    }
cout << hits;
    return 0;
}