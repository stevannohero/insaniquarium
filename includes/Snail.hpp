/**
 * \class Snail
 *
 * Kelas Snail merupakan suatu kelas abstrak untuk objek Snail atau siput.
 * Merupakan turunan dari kelas Entity.
 *
 */

#ifndef SNAIL_H
#define SNAIL_H


#include "Entity.hpp"
#include "Point.hpp"

class Snail: public Entity {
	public:

	///default ctor
	Snail();

	///method gerak Snail. virtual dari method move di Entity
	void virtual move(double sec_time);		

};

#endif
