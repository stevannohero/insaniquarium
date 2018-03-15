#include "Point.hpp"

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(int _x, int _y) {
	x = _x;
	y = _y;
}

Point::Point(const Point& _p) {
	x = _p.x;
	y = _p.y;
}

Point& Point::operator= (const Point& _p) {
	x = _p.x;
	y = _p.y;
	
	return *this;	
}

// setter and getter
int Point::getX() const {
	return x;
}

int Point::getY() const {
	return y;
}

void Point::setX(int _x) {
	x = _x;
}

void Point::setY(int _y) {
	y = _y;
}