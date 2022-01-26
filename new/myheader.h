#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED
#include<iostream>
#include<cmath>
float simpleinterest(float p,float t, float r)
{
     return p*t*r*0.01;
}
float compoundinterest(float p,float t,float r)
{
    return p*pow((1+r*0.01),t)-p;

}

#endif
