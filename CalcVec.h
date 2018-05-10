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
        double constk=8987552000;
//        double *chargefx;
//        double *chargefy;
//        double *chargefz;
        double magnit = 0;
        double dx = 0;
        double dy = 0;
        double dz = 0;
        double dm = 0;
    public:
        double *fx;
        double *fy;
        double *fz;
        void Compute(int,double,double[],double,double[],double,double[],double[]);
        CalcVec(int);
        Destroy();
};

#endif /* CALCVEC_H */
