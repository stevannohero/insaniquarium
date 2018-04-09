#include "../includes/Entity.hpp"
#include "../includes/Point.hpp"

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
void Entity::move() {
	
}
