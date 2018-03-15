/**
 * \class Food
 *
 * Kelas Food menangani objek makanan yang dimakan oleh objek Fish
 *
 */

#ifndef FOOD_H
#define FOOD_H

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

class Food : public Entity {
	public:
	///default ctor
	Food();
	
	///ctor dengan paramater
	Food(int, int);

	///method untuk pergerakan makanan
	virtual void move();
	
}

#endif
