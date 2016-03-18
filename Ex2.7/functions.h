#ifndef EX2_7_FUNCTIONS_H
#define EX2_7_FUNCTIONS_H

#include <fstream>
#include <vector>
#include "Window.h"

using namespace std;

void readPoints(int n,std::vector<float> & xvec,std::vector<float> & yvec,ifstream & f);

//-- JMH -0.5 vector should be const
void drawPoints(SPA::Window & window,vector<float> xvec,vector<float> yvec);

#endif //EX2_7_FUNCTIONS_H
