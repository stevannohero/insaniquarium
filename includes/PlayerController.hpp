#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H

#include "Aquarium.hpp"
#include "Player.hpp"

class PlayerController{
	public:
		PlayerController(Player P);

		void buyFood(Aquarium Aqua);
		void buyEgg(Aquarium Aqua);
		void collectCoin(Aquarium Aqua);

		Player getPlayer();


	private:
		Player P1;
};

#endif