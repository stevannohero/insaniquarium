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
	Point(int, int);

	///cctor
	Point(const Point&);

	///operator=
	Point& operator= (const Point&);

	// setter and getter

	///getter X
	int getX() const;

	///getter Y
	int getY() const;

	///setter X
	void setX(int);

	///setter Y
	void setY(int);
	
	private:
	int x, y; 
};

#endif
