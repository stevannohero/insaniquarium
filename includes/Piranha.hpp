/**
 * \class Piranha
 *
 * Kelas Piranha merupakan kelas turunan dari Fish dengan spesialisasi sifat-sifat Piranha
 *
 */

#ifndef PIRANHA_H
#define PIRANHA_H

#include "Cell.hpp"
#include "Entity.hpp"
#include "Guppy.hpp"
#include "Piranha.hpp"
#include "Snail.hpp"
#include "Food.hpp"
#include "Coin.hpp"
#include "Point.hpp"
#include "LinkedList.hpp"

// Multiple Inherintance
class Piranha: public Guppy, public Entity {
	public:

	///default ctor
	Piranha();
	
	///method untuk makan
	void eat();

	///method untuk mengetahui tahap pertumbuhan Piranha
	void checkGrowth();

	///method untuk menghasilkan koin
	void spawnCoin();
}

#endif
