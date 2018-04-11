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
	Food(double, double);

	///method untuk pergerakan makanan
	void move(double sec_time);

	private:
	int a,b;
	
};
#endif
