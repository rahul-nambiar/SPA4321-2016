#include <iostream>

using namespace std;

int main() {
    cout << "Enter numerator" << endl;
    int x = x; //Could also use 'float' instead of 'int'
    cin >> x;
    cout << "Enter denominator" << endl;
    int y = y;
    cin >> y;
    float z = float(x)/y; //Using a forced conversion

    cout << x << " " << "divided by" << " " << y << " " << "is" << " " << z;
    return 0;

}