/* 
 * File:   CalcVec.h
 * Author: Andrew Won
 * Created on May 06, 2018, 9:47 PM
 * Purpose:  CalcVec Class Specification
 */
#ifndef CALCVEC_H
#define CALCVEC_H
using namespace std;
class CalcVec{
    private:
        double k=8987552000;
        double magnit = 0;
        double dx = 0;
        double dy = 0;
        double dz = 0;
        double dm = 0;
        double *fx;
        double *fy;
        double *fz;
    public:
        double* retfx();
        double* retfy();
        double* retfz();
        void Compute(int,double,double[],double,double[],double,double[],double[]);
        CalcVec(int);
        Destroy();
};

#endif /* CALCVEC_H */
