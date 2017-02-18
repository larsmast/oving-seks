#include <iostream>
using namespace std;
#include "Car.h"



Car::Car() {
	freeSeats = 0;
}
//Defining the constructor
Car::Car(int freeSeats)
{
	this->freeSeats = freeSeats;
}


Car::~Car()
{
}

bool Car::hasFreeSeats() {
	bool space = false;
	if (freeSeats > 0)
		space = true;
	return space;
}

void Car::reserveFreeSeat() {
	
	if (freeSeats > 0)
	{
		freeSeats--;
	}
}

