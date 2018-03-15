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

void Coin::move() {
	// TBD
}
