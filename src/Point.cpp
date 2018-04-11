#include "../includes/Point.hpp"

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(double _x, double _y) {
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
double Point::getX() const {
	return x;
}

double Point::getY() const {
	return y;
}

void Point::setX(double _x) {
	x = _x;
}

void Point::setY(double _y) {
	y = _y;
}
