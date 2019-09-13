//============================================================================
// Name        : Triangle.h
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#ifndef Triangle_h
#define Triangle_h
#include "Shape.h"
class Triangle:public Shape
{
private:
  XYPoint verA,verB,verC;
  double getSideLen();

public:
   Triangle(); //default constructor
   Triangle(XYPoint P1,XYPoint P2,XYPoint P3); //paramterised constructor
   double area();
   ~Triangle(){};

};
#endif
