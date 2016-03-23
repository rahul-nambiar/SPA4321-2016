#include <iostream>
#include "functions.h"

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

    return 0;
}