/**
 * \class Coin
 *
 * Kelas Coin merupakan kelas turunan dari kelas Entity
 *
 */

#ifndef ENTITY_H
#define ENTITY_H

#include "Cell.hpp"
#include "Entity.hpp"
#include "Fish.hpp"
#include "Guppy.hpp"
#include "Piranha.hpp"
#include "Snail.hpp"
#include "Food.hpp"
#include "Coin.hpp"
#include "Point.hpp"
#include "LinkedList.hpp"

class Coin : public Entity {
	public:

	///default ctor
	Coin();

	///ctor dengan paramater
	Coin(int);

	// setter and getter

	///getter nilai value koin
	int getValue();

	///setter value pada koin
	void setValue(int);
	
	// method
	///method untuk koin bergerak
	virtual void move();		
	
	private:
	int value;	 ///<nilai koin
}

#endif
