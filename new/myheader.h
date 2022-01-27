#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED
#include<iostream>
#include<cmath>
using namespace std;
float a,b,c;
float data(float *a, float *b, float *c )
{
    cout<< "enter your principle : ";
    cin>>*a;
    cout<< "enter your time : ";
    cin>>*b;
    cout<< "enter your rate : ";
    cin>>*c;
    return 0;

}
float simpleinterest(float p,float t, float r)
{
     return p*t*r*0.01;
}
float compoundinterest(float p,float t,float r)
{
    return p*pow((1+r*0.01),t)-p;

}

#endif
