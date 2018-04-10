#include "../includes/Coin.hpp"
#include "../includes/Aquarium.hpp"
#include <string>

Coin::Coin():Entity(Aquarium::MAX_X/2, 100) {
	value = 0;
}

Coin::Coin(int x, int y, int _val):Entity(x,y) {
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
	std::string direction = "Down";
	Entity::move(sec_time,direction);
}
