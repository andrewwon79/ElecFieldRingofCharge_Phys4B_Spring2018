/* 
 * File:   CalcVec.cpp
 * Author: Andrew Won
 * Created on May 06, 2018, 9:58 PM
 * Purpose:  CalcVec Class Implementation
 */

#include "CalcVec.h"
#include<iostream>
#include <cmath>
#include<limits>
using namespace std;

void CalcVec::Compute(int amountc,double ptx,double chrx[],double pty,double chry[],double ptz,double chrz[],double chrm[])
{
    for (int count = 0; count < amountc; count++) {
        dx = ptx - chrx[count];
        dy = pty - chry[count];
        dz = ptz - chrz[count];
        dm = sqrtf(powf(dx, 2)+powf(dy, 2)+powf(dz, 2));
        magnit = (k * chrm[count])/(powf(dm, 2));
        double tempx = dx/dm;
        double tempy = dy/dm;
        double tempz = dz/dm;
        fx[count] = magnit*tempx;
        fy[count] = magnit*tempy;
        fz[count] = magnit*tempz;
    }
}

CalcVec::CalcVec(int amountc)
{
    fx=new double[amountc];
    fy=new double[amountc];
    fz=new double[amountc];
}

CalcVec::Destroy()
{
    delete []fx;
    delete []fy;
    delete []fz;
}