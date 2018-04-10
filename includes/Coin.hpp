/**
 * \class Coin
 *
 * Kelas Coin merupakan kelas turunan dari kelas Entity
 *
 */

#ifndef COIN_H
#define COIN_H

#include "Entity.hpp"
#include "Coin.hpp"
#include "Point.hpp"

class Coin : public Entity {
	public:

	///default ctor
	Coin();

	///ctor dengan paramater
	Coin(int x, int y, int val);

	// setter and getter

	///getter nilai value koin
	int getValue();

	///setter value pada koin
	void setValue(int);
	
	// method
	///method untuk koin bergerak
	void move(double sec_time);		
	
	private:
	int value;	 ///<nilai koin
};

#endif
