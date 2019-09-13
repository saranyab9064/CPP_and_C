//============================================================================
// Name        : Rectangle.h
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#ifndef Rectangle_h
#define Rectangle_h
#include "Shape.h"

class Rectangle:public Shape
{
private:
  XYPoint vA,vB,vC,vD;
  double length,width,diagonal;
  bool  IsRect();
  bool IsRightAng(double x,double y,double z);
public:
   Rectangle();
   Rectangle(XYPoint P1,XYPoint P2,XYPoint P3,XYPoint P4);
   double distance(XYPoint P1,XYPoint P2);
   double area();
   ~Rectangle(){};
};
#endif
