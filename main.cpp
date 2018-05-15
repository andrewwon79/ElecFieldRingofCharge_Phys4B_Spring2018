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
    Output writeto;
    //Process/Map inputs to outputs
    ChrgInf.chrgInp();
    ChrgInf.EInput();
    info.Compute(ChrgInf.retAmnt(),ChrgInf.retptx(),ChrgInf.retx(),ChrgInf.retpty(),ChrgInf.rety(),ChrgInf.retptz(),ChrgInf.retz(),ChrgInf.retm());
    writeto.sum(info.retfx(),info.retfy(),info.retfz(),ChrgInf.retAmnt());
    //Output data
    writeto.results();
    //Clean up Dynamic Arrays
    ChrgInf.Destroy();
    info.Destroy();
    //Exit stage right!
    return 0;
}