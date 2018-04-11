#include "../includes/Snail.hpp"
#include "math.h"

Snail::Snail():Entity(300, 448){
	isFacingRight = 0;
	Entity::setVelocity(40);
};

int Snail::getDirection() {
	return isFacingRight;
}

void Snail::setDirection(int direct){
	isFacingRight = direct;
};

void Snail::move(double sec_time){
	// if(isFacingRight==0){
	// 	std::string direction="Left";
	// 	Entity::move(sec_time,direction);
	// }else{
	// 	std::string direction="Right";
	// 	Entity::move(sec_time,direction);
	// }

	int coinIdx = -1;
	double dist = -1;
	int snailX = Entity::getPosition().getX();
	int snailY = Entity::getPosition().getY();
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
		if (Aquarium::coins[coinIdx]->getPosition().getX() <= snailX) {
			setDirection(0);
			Entity::move(sec_time, -1, 0);
		} else {
			setDirection(1);
			Entity::move(sec_time, 1, 0);
		}
		
		// Eat coin
		if (dist < 40) {
			Aquarium::coins.remove(Aquarium::coins[coinIdx]);
			Aquarium::nCoins--;
		}
	}
};
