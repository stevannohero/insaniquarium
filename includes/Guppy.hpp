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
	Guppy() : Fish(1, 10, 10, 10);

	// methods
	void eat();
	void checkGrowth();
	void spawnCoin();
}
