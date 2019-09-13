
//============================================================================
// Name        : XYPoint.cpp
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
class XYPoint
{
public:
	double getX() const;
	double getY() const;
	XYPoint();//default constructor
	XYPoint(double x1,double y1); //parameterised constructor
	XYPoint(const XYPoint &p2);//copy constructor
	bool operator ==(const XYPoint &P1);
	bool operator <=(const XYPoint &P1);
	bool operator >=(const XYPoint &P1);
	bool operator <(const XYPoint &P1);
	bool operator >(const XYPoint &P1);
private:
	double x,y;
};


