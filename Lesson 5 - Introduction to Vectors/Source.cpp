#include<iostream>
#include<vector>
using namespace std;

int main() {

	//declarations
	vector<int> stats;
	int userNum;
	int userChoice = 1;
	char wantToContinue = 'y';

	while (wantToContinue == 'y'|| wantToContinue == 'Y') {
		cout << "1 - add a number to the vector" << endl;
		cout << "2 - remove the last number of the vector" << endl;
		cout << "3 - return the first element of the vector" << endl;
		cout << "4 - return the last element of the vector" << endl;
		cout << "5 - what is the size of the vector" << endl;
		cout << "6 - clear the vector" << endl;
		cout << "7 - is the vector empty" << endl;
		cout << endl;
		cout << "What is your choice: ";
		cin >> userChoice;

		switch (userChoice)
		{
		case 1:
			cout << "Enter a number to be added to the vector: ";
			cin >> userNum;
			stats.push_back(userNum);
			break;
		case 2:
			cout << "The number " << stats.back() << " was removed." << endl;
			stats.pop_back();
			break;
		case 3:
			if (stats.empty() == false)
				cout << "The first element of the vector is " << stats.front() << endl;
			else
				cout << "The vector is empty, therefore there is no first element" << endl;

			break;
		case 4:
			if (stats.empty() == false)
				cout << "The last element of the vector is " << stats.back() << endl;
			else
				cout << "The vector is empty, therefore there is no last element" << endl;

			break;
		case 5:
			cout << "The size of the vector is " << stats.size() << endl;
			break;
		case 6:
			cout << "The vector has been cleared." << endl;
			stats.clear();
			break;
		case 7:
			if (stats.empty() == true)
				cout << "The vector is empty" << endl;
			else
				cout << "The vector is not empty" << endl;

			break;
		default:
			break;
		}
		while (wantToContinue == 'n' || wantToContinue == 'N')
		{
			return 0;
		}
		cout << "Do you want to continue (y/n): ";
		cin >> wantToContinue;
		cout << "------------------------" << endl;
		cout << "------------------------" << endl;
		cout << endl;
	}

	return 0;
}