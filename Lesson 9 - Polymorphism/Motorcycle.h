#include"Vehicle.h"

class Motorcycle: public Vehicle {
private:
	int milesPerGallon;
	char colorInitial; //g->green, r->red, b->blue, etc.
public:
	Motorcycle(); //constructor
	Motorcycle(int numOfWheelsPar, int milesPerGallonPar, char colorInitialPar);

	void setNumOfWheels(int numOfWheelsPar);
	void setMilesPerGallon(int milesPerGallonPar);
	void setColorInitial(char colorPar);
	int getMilesPerGallon();
	char getColorInitial();
	
};