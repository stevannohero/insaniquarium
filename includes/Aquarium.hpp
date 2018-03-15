/**
 * \class Aquarium
 *
 * Kelas yang merepresentasikan Akuarium dalam bentuk matriks 2D.
 * Kelas ini akan menyimpan list yang berisi seluruh komponen yang ada di dalam akuarium.
 *
 */


#ifndef AQUARIUM_H
#define AQUARIUM_H

#include "Cell.hpp"
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

	private:
	const int MAX_X; 		///< max nilai X untuk matriks
	const int MAX_Y;		///< max nilai Y untuk matriks
	Cell cells[][];			///< matriks 2D representasi akuarium
	LinkedList<Fish> fishes; 	///< list yang menyimpan seluruh entitas ikan
	Snail snail;			///< siput
	LinkedList<Food> foods;		///< list yang menyimpan seluruh entitas makanan ikan
	LinkedList<Coin> coins;		///< list yang menyimpan seluruh entitas koin
}

template<class T>
T Aquarium::getClosestEntity(T) {
	// ...
}

#endif
