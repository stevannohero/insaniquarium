#include "../includes/Coin.hpp"
#include "../includes/Aquarium.hpp"

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
	double posx = this->getPosition().getX();
	double posy = this->getPosition().getY();
	double v = getVelocity()*sec_time;
	if(posy<Aquarium::MAX_Y-20){
		posy++;
	};
	Point P(posx,posy);
	this->setPosition(P);
}
