//============================================================================
// Name        : XYPoint.cpp
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#include <iostream>
#include <cmath>
#include "XYPoint.h"

using namespace std;

void XYPoint::setX(double x1)
{
	x=x1;
}
void XYPoint::setY(double y1)
{
	y=y1;
}
double XYPoint::getX() const
    {
	  return x;
	}

double XYPoint::getY()const
    {
	return y;
    }

XYPoint::XYPoint() //default constructor
	{
		x=0;
		y=0;
	}

XYPoint::XYPoint(double x1,double y1) //parameterised constructor
	{
		x=x1;
		y=y1;
	}
XYPoint::XYPoint(const XYPoint &p2) //copy constructor
    {
	x = p2.x;
	y = p2.y;
    }
bool XYPoint::operator <(const XYPoint &P1) //lesser than
		{
	double d1=sqrt(((this->x-0)*(this->x-0))+((this->y-0)*(this->y-0)));
    double d2=sqrt(((P1.getX()-0)*(P1.getX()-0))+((P1.getY()-0)*(P1.getY()-0)));
	return(d1<d2);
		}
bool XYPoint::operator >(const XYPoint &P1) // greater than
   {
	 double d1=sqrt(((this->x-0)*(this->x-0))+((this->y-0)*(this->y-0)));
     double d2=sqrt(((P1.getX()-0)*(P1.getX()-0))+((P1.getY()-0)*(P1.getY()-0)));
	 return(d1>d2);
	}

bool XYPoint::operator ==(const XYPoint &P1) // equal to
	{
	 double d1=sqrt(((this->x-0)*(this->x-0))+((this->y-0)*(this->y-0)));
     double d2=sqrt(((P1.getX()-0)*(P1.getX()-0))+((P1.getY()-0)*(P1.getY()-0)));
	 return(d1==d2);
	}

bool XYPoint::operator >=(const XYPoint &P1) // greater than or equal to
	{
	double d1=sqrt(((this->x-0)*(this->x-0))+((this->y-0)*(this->y-0)));
    double d2=sqrt(((P1.getX()-0)*(P1.getX()-0))+((P1.getY()-0)*(P1.getY()-0)));
	return d1>=d2;
	}

bool XYPoint::operator <=(const XYPoint &P1) // lesser than or equal to
	{
	double d1=sqrt(((this->x-0)*(this->x-0))+((this->y-0)*(this->y-0)));
    double d2=sqrt(((P1.getX()-0)*(P1.getX()-0))+((P1.getY()-0)*(P1.getY()-0)));
	return(d1<=d2);
	}


