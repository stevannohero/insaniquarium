#include "../includes/Snail.hpp"
#include "../includes/Aquarium.hpp"
#include "../oop.hpp"

Snail::Snail():Entity(Aquarium::MAX_X/2, Aquarium::MAX_Y-32){
	
};

void Snail::move(double sec_time){
	int isRight = 0;
	double posx = this->getPosition().getX();
	double posy = this->getPosition().getY();
	double v = getVelocity()*sec_time;
	if(isRight==0 && posx>1){
		posx -= v;
	}else if(isRight==1 && posx<617){
		posx += v;
	};

	Point P(posx,posy);
	this->setPosition(P);
};
