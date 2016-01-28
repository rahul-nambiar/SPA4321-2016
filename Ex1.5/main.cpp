#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter initial velocity: ";
    float u;
    cin >> u;

    cout << "Enter angle: ";
    float theta;
    cin >> theta;

    float ivx = u*cos(theta);
    cout << "X-component of initial velocity = " << ivx << endl;

    float ivy = u*sin(theta);
    cout << "Y-component of initial velocity = " << ivy << endl;

    float g = 9.81;

    float t = ivy/g;
    cout << "Time taken to reach point B = " << t << endl;

    float s = pow(ivy,2)/(2*g);
    cout << "Maximum height = " << s << endl;

    float t2 = 2*t;
    cout << "Total time of travel = " << t2 << endl;

    float x = ivx*t2;
    cout << "Total horizontal distance = " << x << endl;

    return 0;
}