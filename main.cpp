/* 
 * File:   main.cpp
 * Author: Andrew Won
 * Created on May 06, 2018, 9:03 PM
 * Purpose:  Calculate Electric Field
 */
//System Libraries
#include <iostream>
#include <cmath>
#include<climits>
using namespace std;

//User Libraries
#include "Input.h"
#include "CalcVec.h"
#include "Output.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int camount=2;
    Input ChrgInf;
    CalcVec info(camount);
    //Process/Map inputs to outputs
    Output writeto;
    ChrgInf.chrgInp();
    ChrgInf.EInput();
    info.Compute(ChrgInf.retAmnt(),ChrgInf.retptx(),ChrgInf.x,ChrgInf.retpty(),ChrgInf.y,ChrgInf.retptz(),ChrgInf.z,ChrgInf.m);
    writeto.sum(info.fx,info.fy,info.fz,ChrgInf.retAmnt());
    //Output data
    writeto.results();
    //Clean up Dynamic Arrays
    ChrgInf.Destroy();
    info.Destroy();
    //Exit stage right!
    return 0;
}