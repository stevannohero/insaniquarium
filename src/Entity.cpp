#include "../includes/Entity.hpp"
#include "../includes/Point.hpp"
#include <string>

Entity::Entity() {
	position.setX(0);
	position.setY(0);
	velocity = 80.0;
} // position = (0,0)

Entity::Entity(int _x, int _y) {
	position.setX(_x);
	position.setY(_y);
	velocity = 80;
} // position = (x,y)

// setter and getter
Point Entity::getPosition() const {
	return position;
}

double Entity::getVelocity() const {
	return velocity;
}

void Entity::setPosition(Point _p) {
	position.setX(_p.getX());
	position.setY(_p.getY());
}

void Entity::setVelocity(int _velocity) {
	velocity = _velocity;
}

// methods
void Entity::move(double sec_time, double x, double y) {
	double posx = this->position.getX();
	double posy = this->position.getY();
	double v = velocity * sec_time;
	if ((y < 0) && (posy < 460)){
		posy -= y * v;
	} else if ((y >= 0) && (posy > 58)){
		posy += y * v;
	} else if ((x >= 0) && (posx < 627)){
		posx -= x * v;
	} else if ((x < 0) && (posx > 1)){
		posx += x * v;
	};

	Point P(posx,posy);
	this->setPosition(P);
}
