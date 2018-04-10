#include "../includes/Food.hpp"

Food::Food():Entity(0,0){
	
};
	

Food::Food(int x, int y):Entity(x,y){
    setPosition(Point(x, y));
};

	
void Food::move(double sec_time){
	std::string direction = "Down";
	Entity::move(sec_time,direction);
};
	
