#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream InputFile("C:/Users/ap15114/ClionProjects/ap15114/FilesOutput/numbers.dat");
    float sum=0;

    for (int n = 0; n < 10; ++n) {
        int i;
        InputFile >> i;
        cout << i << endl;
        sum+=i;
    }
    float avg = sum/10.0;
    cout << "Average: " << avg << endl;
}