/**
 * \class Snail
 *
 * Kelas Snail merupakan suatu kelas abstrak untuk objek Snail atau siput.
 * Merupakan turunan dari kelas Entity.
 *
 */

#ifndef SNAIL_H
#define SNAIL_H

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

class Snail : public Entity {
	public:

	///default ctor
	Snail();

	///method gerak Snail. virtual dari method move di Entity
	virtual void move();		

}

#endif
