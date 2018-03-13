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

class Fish : public Entity {
	public:		
	// setter and getter
	int getFishState() const;
	int getFoodsToGrow() const;
	int getCoinTime() const;
	int getCoinValue() const;
	int getFishValue() const;
	bool getFull() const;	
	bool getRight() const;

	void setFishState(int state);
	void setFoodsToGrow(int foods);
	void setCoinTime(int cTime);
	void setCoinValue(int value);
	void setFishValue(int value);
	void setFull(bool);
	void setRight(bool);

	protected:
	Fish(int s, int f, int cTime, int cValue, int fValue) : Entity();
	// methods
	virtual void eat() = 0;
	virtual void checkGrowth() = 0;
	virtual void spawnCoin() = 0;

	int state;
	int foodsToGrow; // remaining foods to make fish grow
	int coinTime; // time for fish to produce coin
	int coinValue;
	int fishValue;
	bool isFull;
	bool isRight; // fish is facing right
}
