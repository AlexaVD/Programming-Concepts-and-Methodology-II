#include<iostream>
#include<string>
using namespace std;

struct fibNode {
	int item;
	fibNode* link;
};

int main() {
	//declarations
	int userNum;
	int thirdFibNum = 0;
	string output = "";

	fibNode* head = new fibNode;
	head->link = nullptr;

	//get user input
	cout << "How many Fibonacci numbers do you want to see: ";
	cin >> userNum;

	//establish the first three Fibonacci nodes
	head->item = 1;
	fibNode* firstFibNode = new fibNode;
	firstFibNode = head;
	fibNode* secondFibNode = new fibNode;
	secondFibNode = head;
	head->link = new fibNode;
	secondFibNode = head->link;
	secondFibNode->link = nullptr;

	firstFibNode->item = 1;
	secondFibNode->item = 1;

	//return to user the number of fibs requested
	if (userNum == 1) { //user wants the first fib
		cout << firstFibNode->item << endl;
	}
	else if (userNum == 2) { //user wants the first and second fibs
		cout << firstFibNode->item << ", " << secondFibNode->item << endl;
	}
	else { //user wants three or more fibs
		for (int i = 0; i < userNum; i++)
		{
			output = output + to_string(firstFibNode->item) + ", ";
			thirdFibNum = firstFibNode->item + secondFibNode->item;
			secondFibNode->link = new fibNode;
			secondFibNode = secondFibNode->link;
			secondFibNode->link = nullptr;
			firstFibNode = firstFibNode->link;
			secondFibNode->item = thirdFibNum;
		}
		output = output.erase(output.length() - 2, 2); //remove last comma and space
	} //else { //user wants three or more fibs

	cout << output << endl;

	//delete all nodes
	if (head != nullptr) {
		firstFibNode = head;
		secondFibNode = head;
		head = head->link;
		delete firstFibNode;
		firstFibNode = nullptr;
		secondFibNode = nullptr;
	}
	while (head != nullptr) {
		fibNode* nodeToDelete = new fibNode;
		nodeToDelete = head;
		head = head->link;
		delete nodeToDelete;
		nodeToDelete = nullptr;
	}

	delete head;
	head = nullptr;

	return 0;
}