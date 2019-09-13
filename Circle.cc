//============================================================================
// Name        : Circle.cc
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#include <iostream>
#include <cmath>
#include "Circle.h"


using namespace std;


Circle::Circle() //Default Constructor
	  {
	    Center.setX(0.0);
	    Center.setY(0.0);
	    radius=0;
	  }

Circle:: Circle(XYPoint circleCenter,double r) //Parameterised constructor
	  {
        Center=circleCenter;
        radius=r;
        double a_Cir;
        a_Cir=(radius*radius* 3.14159);
            if(a_Cir==0){
             cerr<<"Radius of a Circle is zero so cannot perform area calculation.Give the proper radius and try again"<<endl;
             exit(-1);
	   }
	  }

void Circle::setRadius(double r)
{
	  r=radius;
}
double Circle:: getradius() const
	  {
		return radius;
	   }
double Circle::area() // Calculate area of a Circle
	  {
            double a_Cir;
            a_Cir=(radius*radius* 3.14159);
            if(a_Cir>0){
	      return a_Cir;}
            else
               cerr<<"Radius of a Circle is zero so cannot perform area calculation"<<endl; 
               exit(-1);
	   }


