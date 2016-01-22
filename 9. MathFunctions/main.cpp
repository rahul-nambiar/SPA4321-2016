#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x = 3;
    float y = 4;
    float z = 5;
    float r = sqrt(pow(x,2)+pow(y,2));
    double sqr_r = pow(r,2);

    float a = z*(x+y);
    cout << "Expression 1" << endl;
    cout << "Answer = " << a << endl;
    cout << endl;

    double b = 4*M_PI*sqr_r;
    cout << "Expression 2" << endl;
    cout << "Answer = " << b << endl;
    cout << endl;

    double c = sqrt(abs(pow(x,2)+pow(y,2)));
    cout << "Expression 3" << endl;
    cout << "Answer = " << c << endl;
    cout << endl;

    double d = cos(M_PI/6);
    cout << "Expression 4" << endl;
    cout << "Answer = " << d << endl;
    cout << endl;

    double e = atan2(-x,y);
    cout << "Expression 5" << endl;
    cout << "Answer = " << e << endl;
    cout << endl;

    double f = pow(M_E,y/pow(x,2));
    cout << "Expression 6" << endl;
    cout << "Answer = " << f << endl;
    cout << endl;

    return 0;
}