#include<iostream>
#include<string>
using namespace std;

//global stuff
const double PI = 3.141596;
int myNumber = 14;

//function prototypes
double mySquareIt(int numPar);
void myExponentFunction(int basePar, int exponentPar, int& resultOfXToThePowerYPar);

int main() {
	//declarations
	int age;
	double taxRate;
	string firstName = "Robert";
	char initial = 'R';
	bool status = true;
	int resultOfXToTheY;
	int myBase;
	int myExponent;

	//get user input
	cout << "What is your name: ";
	cin >> firstName;
	cout << "How old are you: ";
	cin >> age;

	//calculation(s)
	age = age * 2;
	cout << age++ << endl; //incrementing by 1 (post incrementing)
	cout << ++age << endl; //incrementing by 1 (pre incrementing)
	cout << age << endl;

	age--; //post decrementing
	--age; //pre decrementing

	//arithmetic shortcuts
	age += 1; //incrementing by 1 (e.g., age = age + 1)
	age -= 1;
	age *= 1;
	age /= 1;

	cout << "Enter a base number: ";
	cin >> myBase;
	cout << "Enter an exponent number: ";
	cin >> myExponent;

	myExponentFunction(myBase, myExponent, resultOfXToTheY);

	//output



	system("pause");
	return 0;
}

//function definitions
double mySquareIt(int numPar) {
	
	return pow(numPar, 2);
}
void myExponentFunction(int basePar, int exponentPar, int& resultOfXToThePowerYPar) {
	resultOfXToThePowerYPar = pow(basePar, exponentPar);
}