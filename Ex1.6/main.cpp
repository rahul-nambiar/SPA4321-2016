#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n=12;

    cout << "Enter value:" << endl;
    int i;
    cin >> i;

    for(int n=1;n<13;++n) {
        int r = n*i;
        cout << n << " x " << i << " = " << r << endl;
    }

    return 0;
}