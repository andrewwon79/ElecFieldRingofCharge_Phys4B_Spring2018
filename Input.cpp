/* 
 * File:   Input.cpp
 * Author: Andrew Won
 * Created on May 06, 2018, 9:13 PM
 * Purpose:  Input Class Implementation
 */

#include "Input.h"
#include<iostream>
using namespace std;

Input::Input()
{
    x=new double[camount];
    y=new double[camount];
    z=new double[camount];
    m=new double[camount];
}

void Input::chrgInp()
{
    for (int count = 0; count < camount; count++) 
    {
        cout<<"Enter the x coordinate of charge "<<count+1<<endl;
        cin>>x[count];
        cout<<"Enter the y coordinate of charge "<<count+1<<endl;
        cin>>y[count];
        cout<<"Enter the z coordinate of charge "<<count+1<<endl;
        cin>>z[count];
        cout<<"Enter the magnitude of charge "<<count+1<<endl;
        cin>>m[count];
    }
}

void Input::EInput()
{
    cout<<"Enter the x coordinate for the electric field to be calculated."<<endl;
    cin>>ptx;
    cout<<"Enter the y coordinate for the electric field to be calculated."<<endl;
    cin>>pty;
    cout<<"Enter the z coordinate for the electric field to be calculated."<<endl;
    cin>>ptz;
}
int Input::retAmnt()
{
    return camount;
}
double Input::retptx()
{
    return ptx;
}
double Input::retpty()
{
    return pty;
}
double Input::retptz()
{
    return ptz;
}
Input::Destroy()
{
    delete []x;
    delete []y;
    delete []z;
    delete []m;
}