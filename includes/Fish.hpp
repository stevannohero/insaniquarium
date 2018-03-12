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

class Fish {
	public:
	Fish();
		
	// setter and getter
	int getFishState() const;
	int getFoodsToGrow() const;
	int getCoinTime() const;
	bool getFull() const;	
	bool getRight() const;

	void setState(int);
	void setFoodsToGrow(int);	
	void setFull(bool);
	void setCoinTime(int);
	void setRight(bool);

	// methods
	virtual void eat();
	void checkGrowth();
	virtual void spawnCoin();

	private:
	int fishState;
	int foodsToGrow; // remaining foods to make fish grow
	bool isFull;
	int coinTime; // time for fish to produce coin
	bool isRight; // fish is facing right
}
