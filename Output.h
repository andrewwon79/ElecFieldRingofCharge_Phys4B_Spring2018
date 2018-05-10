/* 
 * File:   Output.h
 * Author: Andrew Won
 * Created on May 06, 2018, 10:11 PM
 * Purpose:  Output Class Specification
 */
#ifndef OUTPUT_H
#define OUTPUT_H
using namespace std;
class Output{
    private:
        double xf=0;
        double yf=0;
        double zf=0;
    public:
        void sum(double[],double[],double[],int);
        void results();
};

#endif /* OUTPUT_H */