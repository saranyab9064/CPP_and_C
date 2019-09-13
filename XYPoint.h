//============================================================================
// Name        : XYPoint.h
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#ifndef _XYPoint_h_
#define _XYPoint_h_
class XYPoint
{
public:
	double getX() const;
	double getY() const;
	void setX(double x1);
	void setY(double y1);
	XYPoint();//default constructor
	XYPoint(double x1,double y1); //parameterised constructor
	XYPoint(const XYPoint &p2);//copy constructor
	bool operator ==(const XYPoint &P1);
	bool operator <=(const XYPoint &P1);
	bool operator >=(const XYPoint &P1);
	bool operator <(const XYPoint &P1);
	bool operator >(const XYPoint &P1);
        ~XYPoint(){};
private:
	double x,y;
};
#endif

