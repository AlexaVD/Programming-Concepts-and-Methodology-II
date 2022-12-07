#include<iostream>
#include"Octagon.h"
using namespace std;

int main() {
	int side;
	Octagon myOctagon;

	cout << "Enter the octagon side value: ";
	cin >> side;
	myOctagon.setSide(side);
	myOctagon.display(side);

	system("pause");
	return 0;
}