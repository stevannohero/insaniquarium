#include "../includes/Entity.hpp"
#include "../includes/Point.hpp"
#include <string>

Entity::Entity() {
	position.setX(0);
	position.setY(0);
	velocity = 10.0;
} // position = (0,0)

Entity::Entity(int _x, int _y) {
	position.setX(_x);
	position.setY(_y);
	velocity = 10;
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
void Entity::move(double sec_time, std::string direction) {
	double posx = this->position.getX();
	double posy = this->position.getY();
	double v = velocity * sec_time;
	if ((direction == "Down") && (posy < 460)){
		posy++;
	} else if ((direction == "Up") && (posy > 58)){
		posy -= v;
	} else if ((direction == "Right") && (posx < 627)){
		posx++;
	} else if ((direction == "Left") && (posx > 1)){
		posx -= v;
	};
	Point P(posx,posy);
	this->setPosition(P);
}
