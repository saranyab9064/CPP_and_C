//============================================================================
// Name        : Circle.h
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#ifndef _Circle_h_
#define _Circle_h_
#include "Shape.h"
class Circle:public Shape
{
private:
  XYPoint Center;
  double radius;
public:
  Circle(); //Default Constructor
  Circle(XYPoint circleCenter,double r); //Parameterised constructor
  double getradius() const;
  void setRadius(double r);
  double area();
  ~Circle(){};
};
#endif
