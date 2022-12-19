#include<iostream>
#include"Motorcycle.h"
#include"Automobile.h"
using namespace std;

const int DUCATIMPG = 55;
const int WHEELSONMOTORCYCLE = 2;
const char BLUECOLOR = 'b';

const int CAMRYMPG = 35;
const int WHEELSONAUTOMOBILE = 4;
const int NUMOFPERSONS = 4;
const char REDCOLOR = 'r';

int main() {
	//declarations
	Motorcycle ducati;
	Motorcycle yamaha(2, DUCATIMPG, 'r');
	Automobile blazer;
	Automobile camry(WHEELSONAUTOMOBILE, CAMRYMPG, REDCOLOR, NUMOFPERSONS);

	//output
	ducati.setColorInitial(BLUECOLOR);
	ducati.setMilesPerGallon(DUCATIMPG);
	ducati.setNumOfWheels(WHEELSONMOTORCYCLE);

	cout << "The Ducati motorcycle has " << ducati.getNumOfWheels() << " wheels, gets " << ducati.getMilesPerGallon() << " miles per gallon and is " << ducati.getColorInitial() << " in color.";
	cout << endl;
	cout << "The Yamaha motorcycle has " << yamaha.getNumOfWheels() << " wheels, gets " << yamaha.getMilesPerGallon() << " miles per gallon and is " << yamaha.getColorInitial() << " in color." << endl;

	cout << "The Blazer automobile has " << blazer.getNumOfWheels() << " wheels, gets " << blazer.getMilesPerGallon() << " miles per gallon, is " << blazer.getColorInitial() << " in color, and can hold " << blazer.getPersonsCapacity() << " people.";
	cout << endl;
	cout << "The Camry automobile has " << camry.getNumOfWheels() << " wheels, gets " << camry.getMilesPerGallon() << " miles per gallon, is " << camry.getColorInitial() << " in color, and can hold " << camry.getPersonsCapacity() << " people.";

	return 0;
}