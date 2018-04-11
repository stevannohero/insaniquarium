/**
 * \class Point
 *
 * Kelas Point 2 dimensi x dan y
 *
 */

#ifndef POINT_H
#define POINT_H

#include "Point.hpp"

class Point {
	public:
	///default ctor
	Point();

	///ctor dengan parameter
	Point(double, double);

	///cctor
	Point(const Point&);

	///operator=
	Point& operator= (const Point&);

	// setter and getter

	///getter X
	double getX() const;

	///getter Y
	double getY() const;

	///setter X
	void setX(double);

	///setter Y
	void setY(double);
	
	private:
	double x, y; 
};

#endif
