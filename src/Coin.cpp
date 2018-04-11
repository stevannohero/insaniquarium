#include "../includes/Coin.hpp"
#include "../includes/Aquarium.hpp"
#include <string>

Coin::Coin():Entity(Aquarium::MAX_X/2, 100) {
	value = 0;
	double x = rand() % Aquarium::MAX_X;
    double y = rand() % Aquarium::MAX_Y;
    setPosition(Point(x, y));
}

Coin::Coin(double x, double y, int _val):Entity(x,y) {
	value = _val;
}

// setter and getter
int Coin::getValue() {
	return value;
}

void Coin::setValue(int _val) {
	value = _val;
}

void Coin::move(double sec_time) {
	Entity::move(sec_time, 0, -1);
	std::cout << getPosition().getX() << " " << getPosition().getY() << std::endl;
}
