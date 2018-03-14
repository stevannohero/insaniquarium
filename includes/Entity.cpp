#include "Entity.hpp"
#include "Point.hpp"

Entity::Entity() {
	position.setX(0);
	position.setY(0);
} // position = (0,0)

Entity::Entity(int _x, int _y) {
	position.setX(_x);
	position.setY(_y);
} // position = (x,y)

// setter and getter
Point Entity::getPosition() const {
	return position;
}

int Entity::getVelocity() const {
	return velocity;
}

void Entity::setPosition(Point _p) {
	position.setX(_p.x);
	position.setY(_p.y);
}

void Entity::setVelocity(int _velocity) {
	velocity = _velocity;
}

// methods
void Entity::move() {
	
}