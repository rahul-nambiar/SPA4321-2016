#include <iostream>
#include <fstream>

using namespace std;

int main() {

ofstream OutputFile("C:/Users/ap15114/ClionProjects/ap15114/FilesOutput/numbers.dat");

    for (int n = 0; n < 10; ++n) {

    int i;
    cin >> i;

    OutputFile << i << endl;
    }

    return 0;
}