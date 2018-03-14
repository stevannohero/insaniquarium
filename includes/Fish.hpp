/**
 * \class Fish
 *
 * Kelas Fish merupakan suatu kelas abstrak untuk objek fish
 * Menangani seluruh method yang berlaku di seluruh kelas fish dan turunannya
 *
 */

#ifndef FISH_H
#define FISH_H

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
	
	///Mendapatkan informasi tahap pertumbuhan dari suatu Fish
	int getFishState() const;

	///Mendapatkan informasi sejumlah makanan yang harus dimakan Fish untuk memasuki tahap pertumbuhan selanjutnya
	int getFoodsToGrow() const;

	///Mendapatkan informasi waktu koin
	int getCoinTime() const;

	///Mendapatkan informasi mengenai nilai koin yang dihasilkan suatu jenis Fish tertentu 
	int getCoinValue() const;

	
	int getFishValue() const;

	///Mendapatkan informasi apakah Fish dalam keadaan kenyang atau lapar
	bool getFull() const;	

	///Mendapatkan informasi apakah suatu Fish menghadap ke kanan atau kiri
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

#endif
