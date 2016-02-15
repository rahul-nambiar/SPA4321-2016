#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream InputFile("C:/Users/Rahul/ClionProjects/ap15114/FilesOutput/numbers.dat");

    int i=i;
    float sum=0;

    while(!InputFile.eof())
    {
        InputFile >> i;
        if(InputFile.fail())
        { return 0 ;}
        cout << i << endl;
        sum+=i;
    }
    float avg = sum/10;
    cout << "Average = " << avg << endl;
}