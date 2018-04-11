/**
 * \class Guppy
 *
 * Kelas Guppy merupakan kelas turunan dari Fish dengan spesialisasi sifat-sifat Guppy
 *
 */

#ifndef GUPPY_H
#define GUPPY_H


#include "Entity.hpp"
#include "Fish.hpp"
#include "Guppy.hpp"
#include "Point.hpp"
#include "Coin.hpp"

class Guppy : public Fish, public Entity {
	public:

	///default ctor
	Guppy();

	// methods

	///method untuk makan guppy
	void eat();

	// method untuk mengetahui tahap pertumbuhan Guppy
	void checkGrowth();

	// method untuk menghasilkan koin
	void spawnCoin();

	void move(double sec_time);
};

#endif
