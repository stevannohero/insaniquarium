#include "../includes/Snail.hpp"
#include <cmath>

Snail::Snail():Entity(300, 448){
	isFacingRight = 0;
	Entity::setVelocity(150);
};

int Snail::getDirection() {
	return isFacingRight;
}

void Snail::setDirection(int direct){
	isFacingRight = direct;
};

void Snail::move(double sec_time){
	int coinIdx = -1;
	double dist = -1;
	double snailX = Entity::getPosition().getX();
	double snailY = Entity::getPosition().getY();
	// Get closest coin
	for (int i=0; i<Aquarium::nCoins; i++) {
		int coinX = Aquarium::coins[i]->getPosition().getX();
		int coinY = Aquarium::coins[i]->getPosition().getY();
		double tdist = sqrt((coinX-snailX)*(coinX-snailX) + (coinY-snailY)*(coinY-snailY));
		if (dist == -1 || tdist < dist) {
			coinIdx = i;
			dist = tdist;
		}
	}

	// Move if coin exists
	if (coinIdx != -1) {
		if (abs(Aquarium::coins[coinIdx]->getPosition().getX() - snailX) > 10) {
			if (Aquarium::coins[coinIdx]->getPosition().getX() <= snailX) {
				setDirection(0);
				Entity::move(sec_time, -1, 0);
			} else {
				setDirection(1);
				Entity::move(sec_time, 1, 0);
			}
		}

		// Eat coin
		if (dist < 40) {
			Aquarium::coins.remove(Aquarium::coins[coinIdx]);
			Aquarium::nCoins--;
		}
	}
};
