#include "../includes/Coin.hpp"

Coin::Coin() {
	value = 0;
}

Coin::Coin(int _val) {
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
	double posx = this->getPosition().getX();
	double posy = this->getPosition().getY();
	double v = 10*sec_time;
	posy += v;
	Point P(posx,posy);
	this->setPosition(P);
}
