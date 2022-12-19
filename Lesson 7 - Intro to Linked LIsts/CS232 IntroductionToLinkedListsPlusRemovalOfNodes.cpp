#include<iostream>
using namespace std;

struct agesNode {
	int age; //item of the node
	agesNode* link; //link to another node
};

int main() {
	//declarations
	int numOfAges; //number of age values requested by the user
	agesNode* head = new agesNode;

	//creates the initial values for the head node
	head->age = 49;
	head->link = nullptr;
	
	//********** get user input ***********
	//create an initial link list of values based on the user input
	agesNode* nextAgesNode = new agesNode;
	nextAgesNode = head; //nextAgesNode is the first node

	cout << "How many ages are you going to enter: ";
	cin >> numOfAges;

	//calculations
	for (int i = 0; i < numOfAges; i++)
	{
		nextAgesNode->link = new agesNode;
		nextAgesNode = nextAgesNode->link; //points to that node
		nextAgesNode->link = nullptr;

		cout << "Enter age " << (i + 1) << ": ";
		cin >> nextAgesNode->age;
	}

	//output
	//traverse the linked list and display its contents
	cout << endl << "Traversing the linked list" << endl;
	nextAgesNode = head->link;
	while (nextAgesNode != nullptr) {
		cout << nextAgesNode->age << endl;
		nextAgesNode = nextAgesNode->link;
	}

	//delete all of the nodes previously created
	if (head != nullptr)
	{
		nextAgesNode = head;
		head = head->link;
		delete nextAgesNode;
		nextAgesNode = nullptr;
	}
	
	while (head != nullptr) {
		agesNode* nodeToDelete = new agesNode;
		nodeToDelete = head;
		head = head->link;
		delete nodeToDelete;
		nodeToDelete = nullptr;
	}


	//delete the head node from the free store memory (i.e., heap)
	//delete nextAgesNode;
	//nextAgesNode = nullptr;

	delete head;
	head = nullptr;

	return 0;
}