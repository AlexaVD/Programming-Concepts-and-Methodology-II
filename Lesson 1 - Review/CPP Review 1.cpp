#include<iostream>
#include<string>
using namespace std;

const double PI = 3.141596;

int main() {
	//declarations
	int age; // a whole number data type(i.e., primitive)
	double taxRate; //a number with a decimal point
	string firstName = "Robert";
	char intial = 'R';
	bool status = true;

	//get user input
	cout << "What is your name: ";
	cin >> firstName;
	cout << "How old are you: ";
	cin >> age;

	//calculation(s)
	age = age * 2; //updating old age to the new age
	age++; //increment by 1 (post incrementing)
	age--; //decrement by 1 (post decrementing)
	++age; //increment by 1 (pre increment)
	--age; //decrement by 1 (pre decrement)

	//age += 2; //age = age + 2

	//output
	age = 10;
	cout << ++age << endl; //output =  11, age = 11
	cout << age++ << endl; //output = 11, age = 12
	cout << age << endl; //output = 12, age = 12

	/*
	This is an
	example of a block
	comment that can span
	several lines
	*/
	
	return 0;
}
