//
// Created by ap15114 on 18/02/2016.
//

#include "functions.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readPoints(int n,std::vector<float> & xvec,std::vector<float> & yvec,ifstream & f)
{
    cout << n << endl;

    for (int i = 0; i < n+1; ++i) {
        float x,y;
        f >> x;
        f >> y;
        xvec.push_back(x);
        yvec.push_back(y);

        if (f.fail()){
            cout << "Invalid entry!";
            break;
        }
    }
}
