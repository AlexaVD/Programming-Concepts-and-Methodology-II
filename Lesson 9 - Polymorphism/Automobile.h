#include "Vehicle.h"

class Automobile : public Vehicle {
private:
	int milesPerGallon;
	char colorInitial; //r->red, g->green, b->blue
	int personsCapacity; //i.e., the number of people that can fit in the car
public:
	Automobile(); //constructor
	Automobile(int numOfWheelsPar, int milesPerGallonPar, char colorInitialPar, int personsCapacityPar);
	void setNumOfWheels(int numOfWheelsPar);
	void setMilesPerGallon(int milesPerGallonPar);
	void setColorInitial(char colorPar);
	void setPersonsCapacity(int personsCapacityPar);
	int getMilesPerGallon();
	char getColorInitial();
	int getPersonsCapacity();
};