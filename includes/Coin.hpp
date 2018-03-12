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

class Coin : public Entity {
	public:
	Coin();
	Coin(int);

	// setter and getter
	int getValue();

	void setValue(int);
	
	// method
	virtual void move();		
	
	private:
	int value;
}
