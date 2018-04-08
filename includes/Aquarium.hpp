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

class Aquarium {
	public:
	Aquarium();

	// methods

	///Method untuk mendapatkan suatu entitas tertentu dengan jarak terdekat dari objek
	template<class T>
	T getClosestEntity(T);

	public:
	static const int MAX_X = 640; 	///< max nilai X untuk matriks
	static const int MAX_Y = 480;	///< max nilai Y untuk matriks
	LinkedList<Guppy*> guppies; 	///< list yang menyimpan seluruh entitas ikan
	LinkedList<Piranha*> piranhas; 	///< list yang menyimpan seluruh entitas ikan
	Snail* snail;					///< siput
	LinkedList<Food*> foods;		///< list yang menyimpan seluruh entitas makanan ikan
	LinkedList<Coin*> coins;		///< list yang menyimpan seluruh entitas koin
};


#endif
