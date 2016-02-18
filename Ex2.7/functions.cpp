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
        if (f.fail()){
            break;
        }
        f >> y;
        if (f.fail()){
            break;
        }
        xvec.push_back(x);
        yvec.push_back(y);

        if (f.fail()){
            break;
        }
    }
}

void drawPoints(SPA::Window & window,vector<float> xvec,vector<float> yvec)
{
int i=0;

    for (vector<float>::iterator iterator1=xvec.begin(); iterator1 != xvec.end(); ++iterator1) {
        float x=0;
        float y=0;
        x=xvec.at(i);
        y=yvec.at(i);
        window.addPoint(x,y);
        ++i;
    }
}