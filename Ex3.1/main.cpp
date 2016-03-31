#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.h"
#include "random.h"

using namespace std;

int main() {

srand(time(0));
time_t t = time(0);
cout << "Seed = " << t << endl;

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

    double pi = 3.141592654;
    double sigma1 = 2*(pi/180);

    int wins = 0;
    int hitsInARow = 0;

for (int i = 0; i < 10000; ++i) {

    double deltaAngle = Random::randomNorm(0, sigma1);
    double actualAngle = nominalAngle + deltaAngle;

    double deltaSpeed = Random::randomNorm(1, 0.1);
    double actualSpeed = speed * deltaSpeed;

    double height = impact(actualAngle, actualSpeed, distance);

    if (-0.5 < height < 0.5) {
        hits++;
        hitsInARow++;
    }
    else{hitsInARow=0;}

    if (hitsInARow==3){
        wins++;
        hitsInARow=0;
    }
}
    cout << "Hits = " << hits << endl;
    cout << "Wins = " << wins << endl;
return 0;
}
