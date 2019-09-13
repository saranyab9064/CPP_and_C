//============================================================================
// Name        : Shape.h
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#ifndef _Shapeh_
#define _Shapeh_
#include "XYPoint.h"

class Shape
{
public:
    Shape(){};
    virtual double area()=0;
    virtual ~Shape(){};
};
#endif
