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
	Piranha();
	
	void eat();
	void checkGrowth();
	void spawnCoin();

	private:
}
