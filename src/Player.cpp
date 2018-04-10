#include "../includes/Player.hpp"

Player::Player(){
	money = 1000;
	eggs = 0;
	win = false;
};

void Player::setMoney(int _money){
	money = _money;
};
void Player::setEggs(int _eggs){
	eggs = _eggs;
};
void Player::setWin(bool _win){
	win = _win;
};

int Player::getMoney(){
	return money;
};
int Player::getEggs(){
	return eggs;
};
bool Player::isWin(){
	return win;
};

