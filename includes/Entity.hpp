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
	Entity(); // position = (0,0)
	Entity(int, int) // position = (x,y)

	// setter and getter
	Point getPosition() const;
	int getVelocity() const;

	void setPosition(Point);
	void setVelocity(int);

	// methods
	void move();
	
	private:
	Point position;
	int velocity;
}
