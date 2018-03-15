/**
 * \class Guppy
 *
 * Kelas Guppy merupakan kelas turunan dari Fish dengan spesialisasi sifat-sifat Guppy
 *
 */

#ifndef GUPPY_H
#define GUPPY_H

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

class Guppy : public Fish, public Entity {
	public:

	///default ctor
	Guppy() : Fish(1, 10, 10, 10);

	// methods

	///method untuk makan guppy
	void eat();

	///method untuk mengetahui tahap pertumbuhan Guppy
	void checkGrowth();

	///method untuk menghasilkan koin
	void spawnCoin();
}

#endif
