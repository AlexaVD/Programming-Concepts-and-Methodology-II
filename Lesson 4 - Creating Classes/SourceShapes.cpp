#include<iostream>
#include"Cube.h"
#include"Cylinder.h"
using namespace std;

int main() {
	//declarations
	double cubeSide;
	double cylinderHeight;
	double cylinderRadius;
	int userShapeChoice;
	double tempDouble;

	Cube myCube;
	Cylinder myCylinder;

	//get user input
	cout << "For which shape do you want to calculate the surface area and volume?" << endl;
	cout << "1 - Cube" << endl;
	cout << "2 - Cylinder" << endl;
	cout << "Which shape do you want (1 or 2): ";
	cin >> userShapeChoice;

	if (userShapeChoice == 1) {
		cout << "Enter a side value for the cube: ";
		cin >> tempDouble;
		myCube.setSide(tempDouble);
	}
	else if (userShapeChoice == 2) {
		cout << "Enter a radius value for the cylinder: ";
		cin >> tempDouble;
		myCylinder.setRadius(tempDouble);

		cout << "Enter a height value for the cylinder: ";
		cin >> tempDouble;
		myCylinder.setHeight(tempDouble);
	}

	//calculations and output
	if (userShapeChoice == 1) {
		cout << "The surface area for the cube is " << myCube.calcSurface() << endl;
		cout << "The volume for the cube is " << myCube.calcVolume() << endl;
	}
	else if (userShapeChoice == 2) {
		cout << "The surface area for the cylinder is " << myCylinder.calcCylinderSurface() << endl;
		cout << "The volume for the cylinder is " << myCylinder.calcCylinderVolume() << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}