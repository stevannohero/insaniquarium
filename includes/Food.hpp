/**
 * \class Food
 *
 * Kelas Food menangani objek makanan yang dimakan oleh objek Fish
 *
 */

#ifndef FOOD_H
#define FOOD_H


#include "Entity.hpp"
#include "Food.hpp"
#include "Point.hpp"


class Food : public Entity {
	public:
	///default ctor
	Food();
	
	///ctor dengan paramater
	Food(int, int);

	///method untuk pergerakan makanan
	virtual void move();

	private:
	int a,b;
	
};
#endif
