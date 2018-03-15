/**
 * \class Fish
 *
 * Kelas Fish merupakan suatu kelas abstrak untuk objek Fish.
 * Menangani seluruh method yang berlaku di seluruh kelas Fish dan turunannya.
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
	
	///Mendapatkan nilai tahap pertumbuhan dari suatu Fish
	int getFishState() const;

	///Mendapatkan nilai sejumlah makanan yang harus dimakan Fish untuk memasuki tahap pertumbuhan selanjutnya
	int getFoodsToGrow() const;

	///Mendapatkan nilai waktu koin
	int getCoinTime() const;

	///Mendapatkan nilai koin yang dihasilkan suatu jenis Fish tertentu 
	int getCoinValue() const;

	///Mendapatkan nilai ikan yang nantinya mempengaruhi nilai koin yang dihasilkannya
	int getFishValue() const;

	///Mendapatkan informasi apakah Fish dalam keadaan kenyang atau lapar
	bool getFull() const;	

	///Mendapatkan informasi apakah suatu Fish menghadap ke kanan atau kiri
	bool getRight() const;

	///Setter tahap pertumbuhan ikan
	void setFishState(int state);

	///Setter jumlah makanan yang dibutuhkan untuk bertumbuh ke tahap selanjutnya
	void setFoodsToGrow(int foods);

	///Setter waktu koin
	void setCoinTime(int cTime);

	///Setter value koin
	void setCoinValue(int value);

	///Setter value ikan
	void setFishValue(int value);

	///Setter informasi kenyang atau tidaknya sebuah objek ikan
	void setFull(bool);

	///Setter arah hadap ikan. Akan menghadap ke kanan jika true, dan ke kiri jika false
	void setRight(bool);

	protected:
	///ctor dengan parameter
	Fish(int s, int f, int cTime, int cValue, int fValue) : Entity();
	
	// methods

	///method untuk makan
	virtual void eat() = 0;

	///method untuk melihat state pertumbuhan
	virtual void checkGrowth() = 0;

	///method untuk menghasilkan koin
	virtual void spawnCoin() = 0;

	int state; 		///<tahap pertumbuhan ikan. nilainya 1-3
	int foodsToGrow; 	///<banyak makanan yang dibutuhkan oleh ikan untuk bertumbuh ke tahap selanjutnya
	int coinTime; 		///<waktu yang dibutuhkan ikan untuk menghasilkan koin
	int coinValue; 		///<nilai koin
	int fishValue; 		///<nilai ikan, digunakan untuk menentukan nilai koin yang dihasilkannya
	bool isFull; 		///<boolean apakah ikan lapar atau tidak
	bool isRight; 		///<boolean arah hadap ikan
}

#endif
