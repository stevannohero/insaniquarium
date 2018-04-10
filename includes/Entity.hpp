/**
 * \class Entity
 *
 * Kelas Entity merupakan Abstract Base Class atau Interface
 *
 */

#ifndef ENTITY_H
#define ENTITY_H


#include "Entity.hpp"
#include "Point.hpp"
#include <cstdlib>
#include <string>


// Abstract Base Class
class Entity {
	public:
	
	///default ctor. menciptakan objek di lokasi (0,0) di akuarium
	Entity(); // position = (0,0)

	///ctor dengan dua parameter integer untuk menentukan posisi objek di akuarium
	Entity(int, int); // position = (x,y)

	// setter and getter

	///getter posisi objek di akuarium
	Point getPosition() const;

	///getter kecepatan dari suatu objek entity
	double getVelocity() const;

	///setter posisi objek
	void setPosition(Point);

	///setter kecepatan bergerak objek
	void setVelocity(int);

	// methods
	///method untuk objek bergerak
	void move(double sec_time, std::string direction);
	
	private:
	Point position;		///< menyimpan data posisi objek
	double velocity; 		///< menyimpan nilai kecepatan objek untuk bergerak
};

#endif
