//============================================================================
// Name        : Triangle.cc
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#include <iostream>
#include <cmath>
#include "Triangle.h"
using namespace std;

Triangle::Triangle()
{
	verA.setX(0.0);
	verA.setY(0.0);
	verB.setX(0.0);
	verB.setY(0.0);
	verC.setX(0.0);
	verC.setY(0.0);

}
Triangle::Triangle(XYPoint P1,XYPoint P2,XYPoint P3)
{
	verA=P1;
	verB=P2;
	verC=P3;
       //condition to check whether the given points form a triangle
        double line1=verA.getX()*(verB.getY()-verC.getY());
        double line2=verB.getX()*(verC.getY()-verA.getY());
        double line3=verC.getX()*(verA.getY()-verB.getY());  
        double temp=line1+line2+line3;
        if(temp==0){ 
                cerr << "The given points are collinear and doesn't form a triangle.Give the proper points and  try again"<< endl;
		exit(-1);
         }
}

double Triangle::getSideLen()
 {
	double a,b,c,d,p;
        double A,B,C;
	a=verA.getX();
	b=verA.getY();
	c=verB.getX();
	d=verB.getY();
        C=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	a=verB.getX();
	b=verB.getY();
	c=verC.getX();
	d=verC.getY();
        A=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	a=verC.getX();
	b=verC.getY();
	c=verA.getX();
	d=verA.getY();
        B=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        //condition to check whether the given points form a triangle
        double line1=verA.getX()*(verB.getY()-verC.getY());
        double line2=verB.getX()*(verC.getY()-verA.getY());
        double line3=verC.getX()*(verA.getY()-verB.getY());  
        double temp=line1+line2+line3;
        if(temp==0){
		cerr << "The given points are collinear and doesn't form a triangle.Give the proper points and  try again"<< endl;
		exit(-1);
         }
        else{
           p=(A+B+C)/2; 
           return sqrt(p*(p-A)*(p-B)*(p-C)); }     
 
}
double Triangle::area()
{       
	double a_tri=getSideLen();
        return a_tri;
}
