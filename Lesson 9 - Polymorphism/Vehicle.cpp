#include"Vehicle.h"

Vehicle::Vehicle() {
	numOfWheels = 0;
}

Vehicle::Vehicle(int numOfWheelsPar) {
	setNumOfWheels(numOfWheelsPar);
}

void Vehicle::setNumOfWheels(int numOfWheelsPar) {
	if (numOfWheelsPar > 0) {
		numOfWheels = numOfWheelsPar;
	}
	else {
		numOfWheels = 0;
	}
}

int Vehicle::getNumOfWheels() {
	return numOfWheels;
}