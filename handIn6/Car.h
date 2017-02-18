#pragma once

#include <iostream>
#include <string>

using namespace std;

#ifndef CAR_H
#define CAR_H


class Car
{
public:
	
	bool hasFreeSeats();
	void reserveFreeSeat();


private:
	int freeSeats;
	Car();

	//Overload constructor
	Car(int freeSeats);
	~Car();
};

#endif