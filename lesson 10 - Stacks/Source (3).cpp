#include<iostream>
using namespace std;
#include"IntegerArrayStack.h"


int main() {
	IntegerArrayStack* stackPtr = new IntegerArrayStack();

	char tryAgain = 'Y';
	int choice;
	int item;

	while (tryAgain == 'Y' || tryAgain == 'y') 
	{
		system("cls"); //clear the screen only Window
		cout << "Stack operations using arrays" << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Peek" << endl;
		cout << "4. Display" << endl;
		cout << "____________" << endl;
		cout << "Enter your choice: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Integer item to be pushed: ";
			cin >> item;
			stackPtr->push(item);
			break;
		case 2:
			cout << "Integer item popped: " << stackPtr->pop();
			break;
		case 3:
			cout << "Peek value is " << stackPtr->peek();
			break;
		case 4:
			cout << "Contents of the stack" << endl;
			stackPtr->display();
			break;
		default:
			break;
		}//switch (choice)

		cout << endl << "Try again (y/n): ";
		cin >> tryAgain;
	}//while (tryAgain == 'Y' || tryAgain == 'y') 

	delete stackPtr;
	stackPtr = nullptr;

	system("pause");
	return 0;
}