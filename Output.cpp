/* 
 * File:   Output.cpp
 * Author: Andrew Won
 * Created on May 06, 2018, 10:21 PM
 * Purpose:  Output Class Implementation
 */

#include "Output.h"
#include<iostream>
#include <cmath>
#include<limits>
using namespace std;

void Output::sum(double chrfx[], double chrfy[], double chrfz[],int amountC)
{
    for (int count = 0; count < amountC; count++) 
    {
        xf = xf + chrfx[count];
        yf = yf + chrfy[count];
        zf = zf + chrfz[count];
    }
}

void Output::results()
{
    cout<<"("<<xf/1000000000<<","<<yf/1000000000<<","<<zf/1000000000<<")"<<endl;
}