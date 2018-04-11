/**
 * \class Aquarium
 *
 * Kelas yang merepresentasikan Akuarium dalam bentuk matriks 2D.
 * Kelas ini akan menyimpan list yang berisi seluruh komponen yang ada di dalam akuarium.
 *
 */


#ifndef AQUARIUM_H
#define AQUARIUM_H

#include "Entity.hpp"
#include "Guppy.hpp"
#include "Piranha.hpp"
#include "Snail.hpp"
#include "Food.hpp"
#include "Coin.hpp"
#include "Point.hpp"
#include "LinkedList.hpp"

class Snail;

class Aquarium {
	public:
	Aquarium();
	static int nGuppies;
	static int nPiranhas;
	static int nFoods;
	static int nCoins;

	static const int MAX_X = 640; 	///< max nilai X untuk matriks
	static const int MAX_Y = 480;	///< max nilai Y untuk matriks
	static LinkedList<Guppy*> guppies; 	///< list yang menyimpan seluruh entitas ikan
	static LinkedList<Piranha*> piranhas; 	///< list yang menyimpan seluruh entitas ikan
	static Snail* snail;					///< siput
	static LinkedList<Food*> foods;		///< list yang menyimpan seluruh entitas makanan ikan
	static LinkedList<Coin*> coins;		///< list yang menyimpan seluruh entitas koin
};


#endif
