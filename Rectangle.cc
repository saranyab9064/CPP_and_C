//============================================================================
// Name        : Rectangle.cc
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#include "Rectangle.h"
#include <cmath>
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
    vA.setX(0.0);
    vA.setY(0.0);
    vB.setX(0.0);
    vB.setY(0.0);
    vC.setX(0.0);
    vC.setY(0.0);
    vD.setX(0.0);
    vD.setY(0.0);
    length = 0.0;
    width = 0.0;
    diagonal = 0.0;
}
Rectangle::Rectangle(XYPoint P1,XYPoint P2,XYPoint P3,XYPoint P4)
{
    vA = P1;
    vB = P2;
    vC = P3;
    vD = P4;
    if(!IsRect())
    {
        cerr << " Not a valid Rectangle .Enter a proper input and try again" << endl;
        exit(-1);
    }
        
}


double Rectangle::distance(XYPoint P1, XYPoint P2)
{
    double a,b,c,d,dist;
    a=P1.getX();
    b=P1.getY();
    c=P2.getX();
    d=P2.getY();
    dist = sqrt((a-c)*(a-c) + (b-d)*(b-d));
    return dist;
}


bool Rectangle::IsRect()
{
    
    double x,y,z,s1,s2;
    x = distance(vA,vB);
    y = distance(vA,vC);
    z = distance(vA,vD);
    
    if(IsRightAng(x,y,z))
    {
        s1 = distance(vD,vB);
        s2 = distance(vD,vC);
        if((x==s2) && (y==s1))
        {
            length = x;
            width = y;
            diagonal = z;
            return true;
        }
        else
            return false;
    }
    else if(IsRightAng(x,z,y))
    {
        s1 = distance(vC,vB);
        s2 = distance(vC,vD);
        if((x==s2) && (z==s1))
        {
            length = x;
            width = z;
            diagonal = y;
            return true;
        }
        else
            return false;
        
    }
    
    else if(IsRightAng(y,z,x))
    {
        s1 = distance(vB,vC);
        s2 = distance(vB,vD);
        if((y==s2) && (z==s1))
        {
            length = y;
            width = z;
            diagonal = x;
            return true;
        }
        else
            return false;

    }
    else
    {
        return false;
    }
}

bool Rectangle::IsRightAng(double x,double y,double z)
{
    return (sqrt(x*x + y*y) == z);
}

double Rectangle::area()
{
    return (length * width);
}
