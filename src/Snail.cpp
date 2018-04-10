#include "../includes/Snail.hpp"

Snail::Snail():Entity(300, 448){
	
};

void Snail::move(double sec_time){
	int isRight = 1;
	double posx = this->getPosition().getX();
	double posy = this->getPosition().getY();
	double v = getVelocity()*sec_time;
	if(posx<608){
		posx++;
	};
	/*if(isRight==0){
		posx -= v;
		if(posx==32){
			isRight=1;
		};
	}else{
		posx++;
		if(posx>608){
			isRight=0;
		};
	};*/

	Point P(posx,posy);
	this->setPosition(P);
};
