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

class Aquarium {
	public:
	Aquarium();
	

	private:
	const int MAX_X;
	const int MAX_Y;
	Cell cells[][];
}
