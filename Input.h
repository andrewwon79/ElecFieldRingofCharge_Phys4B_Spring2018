/* 
 * File:   Input.h
 * Author: Andrew Won
 * Created on May 06, 2018, 9:10 PM
 * Purpose:  Input Class Specification
 */

#ifndef INPUT_H
#define INPUT_H
using namespace std;
class Input{
    private:
        int camount=2;
        double ptx;
        double pty;
        double ptz;
        double *x;
        double *y;
        double *z;
        double *m;
    public:
        double* retx();
        double* rety();
        double* retz();
        double* retm();
        int retAmnt();
        Input();
        void chrgInp();
        void EInput();
        double retptx();
        double retpty();
        double retptz();
        Destroy();
};

#endif /* INPUT_H */
