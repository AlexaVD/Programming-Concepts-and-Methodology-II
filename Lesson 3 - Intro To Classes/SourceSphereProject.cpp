#include<iostream>
#include<string>
#include "Sphere.h"
using namespace std;

int main() {
	//declarations
	double radiusTemp;
	Sphere basketball; //instantiation. basketball is the object of class type Sphere
	Sphere baseball(2.0);

	
	//get user input
	cout << "What is the radius for the basketball: ";
	cin >> radiusTemp;
	basketball.setRadius(radiusTemp);

	//calculation and output
	radiusTemp = basketball.getRadius();
	cout << "Basketball:" << endl;
	cout << "Surface Area: " << basketball.calcSurfaceArea(radiusTemp) << endl;
	cout << "Volume: " << basketball.calcVolume(radiusTemp) << endl << endl;
	
	/*radiusTemp = baseball.getRadius();
	cout << "Baseball: " << endl;
	cout << "Surface Area: " << baseball.calcSurfaceArea(radiusTemp) << endl;
	cout << "Volume: " << baseball.calcVolume(radiusTemp) << endl << endl;
	*/

	cout << "Baseball: " << endl;
	cout << "Surface Area: " << baseball.calcSurfaceArea(baseball.getRadius()) << endl;
	cout << "Volume: " << baseball.calcVolume(baseball.getRadius()) << endl << endl;

	system("pause");
	return 0;
}