#include "../includes/Food.hpp"

Food::Food():Entity(0,0){
	
};
	

Food::Food(double x, double y):Entity(x,y){
    setPosition(Point(x, y));
};

	
void Food::move(double sec_time){
	Entity::move(sec_time, 0, -1);
};
	
