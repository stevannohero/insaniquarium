/**
 * \class Piranha
 *
 * Kelas Piranha merupakan kelas turunan dari Fish dengan spesialisasi sifat-sifat Piranha
 *
 */

#ifndef PIRANHA_H
#define PIRANHA_H

#include "Entity.hpp"
#include "Piranha.hpp"
#include "Coin.hpp"
#include "Point.hpp"
#include "Guppy.hpp"

// Multiple Inherintance
class Piranha: public Fish, public Entity {
	public:

	///default ctor
	Piranha();
	
	///method untuk makan
	void eat();

	///method untuk mengetahui tahap pertumbuhan Piranha
	void checkGrowth();

	///method untuk menghasilkan koin
	void spawnCoin();
};

#endif
