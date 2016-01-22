#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int b = 4;
    int c = 5;

    float x = a+b*c;    //Calculates b*c first
    float y = (a+b)*c;  //Calculates a+b first
    float z = a+(b*c);

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}