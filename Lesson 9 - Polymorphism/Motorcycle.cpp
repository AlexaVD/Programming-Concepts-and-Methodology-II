#include"Motorcycle.h"

const int NUMOFMOTOCYLEWHEELS = 2;
const char DEFAULTCOLOR = 'k'; //black

Motorcycle::Motorcycle() {
	milesPerGallon = 0;
	colorInitial = DEFAULTCOLOR;
	Vehicle::setNumOfWheels(NUMOFMOTOCYLEWHEELS);
}
Motorcycle::Motorcycle(int numOfWheelsPar, int milesPerGallonPar, char colorInitialPar) {
	milesPerGallon = milesPerGallonPar;
	colorInitial = colorInitialPar;
	Vehicle::setNumOfWheels(numOfWheelsPar);
}

void Motorcycle::setNumOfWheels(int numOfWheelsPar) {
	Vehicle::setNumOfWheels(numOfWheelsPar);
	//setNumOfWheels(numOfWheelsPar);
}
void Motorcycle::setMilesPerGallon(int milesPerGallonPar) {
	milesPerGallon = milesPerGallonPar;
}
void Motorcycle::setColorInitial(char colorPar) {
	colorInitial = colorPar;
}
int Motorcycle::getMilesPerGallon() {
	return milesPerGallon;
}
char Motorcycle::getColorInitial() {
	return colorInitial;
}