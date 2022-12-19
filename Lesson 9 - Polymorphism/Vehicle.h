#ifndef _VEHICLE
#define _VEHICLE

class Vehicle {
private:
	int numOfWheels;
public:
	Vehicle(); //constructor
	Vehicle(int numOfWheelsPar); //overloaded constructor

	void setNumOfWheels(int numOfWheelsPar);
	int getNumOfWheels();

};

#endif