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

// Abstract Base Class
class Entity {
	public:
	virtual void move() = 0;
	Point getClosestEntity(T);
	
	// setter and getter
	int getVelocity() const;

	void setVelocity();

	private:
	Point position;
	int velocity;
}
