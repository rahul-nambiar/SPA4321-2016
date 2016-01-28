#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x;
    cin >> x;

    float y;
    cin >> y;

    float r = sqrt(pow(x,2)+pow(y,2));
    cout << r << endl;

    float theta = atan(y/x);
    cout << theta << endl;

    return 0;
}