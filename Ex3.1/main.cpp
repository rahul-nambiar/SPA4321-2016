#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.h"
#include "random.h"

using namespace std;

int main() {

srand(time(0));
time_t t = time(0);
cout << t << endl;

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

    int hits = 0;
    double speed = 10.0;
    double distance = 5.0;

    double nominalAngle = angle(distance,speed);
    cout << nominalAngle << endl;

    double pi = 3.141592654;
    double sigma1 = 2*(pi/180);

for (int i = 0; i < 10000; ++i) {

    double deltaAngle = Random::randomNorm(0,sigma1);
    double actualAngle = nominalAngle + deltaAngle;

    double deltaSpeed = Random::randomNorm(1,0.1);
    double actualSpeed = speed*deltaSpeed;

    double height = impact(actualAngle,actualSpeed,distance);

    if(-0.5<height<0.5){
        hits++;
    }
}
cout << hits;
    return 0;
}