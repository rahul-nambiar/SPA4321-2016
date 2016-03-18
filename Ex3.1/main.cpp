#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    bool t1 = test1();
    if (t1){
        cout << "Test 1 SUCCESS";
    }
    else {
        cout << "Test 1 FAILURE";
    }
    return 0;
}