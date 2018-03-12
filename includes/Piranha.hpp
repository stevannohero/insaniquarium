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

// Multiple Inherintance
class Piranha: public Fish, public Entity {
	public:
	Piranha();
	
	virtual void eat();
	virtual void spawnCoin();

	private:
}
