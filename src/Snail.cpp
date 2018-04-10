#include "../includes/Snail.hpp"
#include "../includes/Aquarium.hpp"
#include "../oop.hpp"

Snail::Snail():Entity(Aquarium::MAX_X/2, Aquarium::MAX_Y-32){
	
};

void Snail::move(double sec_time){
	int isRight = 1;
	double posx = this->getPosition().getX();
	double posy = this->getPosition().getY();
	double v = getVelocity()*sec_time;
	if(posx<Aquarium::MAX_X-32){
		posx++;
		cout << posx << endl;
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
