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

class Point {
	public:
	Point();
	Point(int, int);
	Point(const Point&);
	Point& operator= (const Point&);

	// setter and getter
	int getX() const;
	int getY() const;

	void setX(int);
	void setY(int);
	
	private:
	int x, y;
}
