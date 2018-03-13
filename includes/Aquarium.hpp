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
	template<class T>
	T getClosestEntity(T);

	private:
	const int MAX_X;
	const int MAX_Y;
	Cell cells[][];
	LinkedList<Fish> fishes;
	Snail snail;
	LinkedList<Food> foods;
	LinkedList<Coin> coins;
}

template<class T>
T Aquarium::getClosestEntity(T) {
	// ...
}
