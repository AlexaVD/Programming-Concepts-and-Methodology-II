#include"Automobile.h"

const int NUMOFAUTOMOBILEWHEELS = 4;
const int NUMOFPERSONSCAPACITY = 4;
const char DEFAULTCOLOR = 'k'; //black

Automobile::Automobile() {
	milesPerGallon = 0;
	colorInitial = DEFAULTCOLOR;
	setNumOfWheels(NUMOFAUTOMOBILEWHEELS);
	setPersonsCapacity(NUMOFPERSONSCAPACITY);
}
Automobile::Automobile(int numOfWheelsPar, int milesPerGallonPar, char colorInitialPar, int personsCapacityPar) {
	milesPerGallon = milesPerGallonPar;
	colorInitial = colorInitialPar;
	Vehicle::setNumOfWheels(numOfWheelsPar);
	setPersonsCapacity(personsCapacityPar);
}
void Automobile::setNumOfWheels(int numOfWheelsPar) {
	if (numOfWheelsPar > 0) {
		Vehicle::setNumOfWheels(numOfWheelsPar);
	}
}
void Automobile::setMilesPerGallon(int milesPerGallonPar) {
	if (milesPerGallonPar > 0) {
		milesPerGallon = milesPerGallonPar;
	}
	else {
		milesPerGallon = 0;
	}
}
void Automobile::setColorInitial(char colorPar) {
	colorInitial = colorPar;
}
void Automobile::setPersonsCapacity(int personsCapacityPar) {
	if (personsCapacityPar > 0) {
		personsCapacity = personsCapacityPar;
	}
	else {
		personsCapacity = 4;
	}
}
int Automobile::getMilesPerGallon() {
	return milesPerGallon;
}
char Automobile::getColorInitial() {
	return colorInitial;
}
int Automobile::getPersonsCapacity() {
	return personsCapacity;
}