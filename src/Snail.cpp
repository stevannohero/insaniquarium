#include "../includes/Snail.hpp"

Snail::Snail():Entity(300, 448){
	isFacingRight = 0;
};

void Snail::setDirection(int direct){
	isFacingRight = direct;
};

void Snail::move(double sec_time){
	if(isFacingRight==0){
		std::string direction="Left";
		Entity::move(sec_time,direction);
	}else{
		std::string direction="Right";
		Entity::move(sec_time,direction);
	}
};
