/*
vecList[index] returns the element at the position specified by index.
vecList.front() return the first element
vecList.back() returns the last element
vecList.clear() deletes all elements from the object
vecList.push_back(elem) a copy of elem is inserted into vecList at the end
vecList.pop_back() delete the last element of vecList
vecList.empty() returns true if the object vecList is empty and false otherwise.
vecList.size() return the number of elements currently in the object vecList
vecList.max_size() return the max number of elements that can be inserted into the object.
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	//declarations
	vector<int> playerNumbers;
	vector<string> playerNames;
	vector<bool> playerAbsent;
	int numOfPlayers;
	int cntPlayers;
	int num;
	string name = "";
	char playingToday = 'N';
	bool isAbsent;
	bool isActive = true;

	//get the user input
	cout << "How many players are on the team? ";
	cin >> numOfPlayers;

	//calculation
	for (cntPlayers = 0; cntPlayers < numOfPlayers; cntPlayers++) {
		cout << "What is player " << cntPlayers + 1 << "'s name: ";
		cin >> name;
		playerNames.push_back(name);

		cout << "What is " << playerNames[cntPlayers] << "'s jersey number: ";
		cin >> num;
		playerNumbers.push_back(num);

		cout << "Is " << playerNames[cntPlayers] << " playing today (Y/N): ";
		cin >> playingToday;
		if (playingToday == 'y' || playingToday == 'Y')
			playerAbsent.push_back(false);
		else
			playerAbsent.push_back(true);

		cout << endl;

	} //for (cntPlayers = 0; cntPlayers < numOfPlayers; cntPlayers++)

	//output
	for (cntPlayers = 0; cntPlayers < numOfPlayers; cntPlayers++) {
		cout << playerNames[cntPlayers] << "'s jersey number is " << playerNumbers[cntPlayers] << " and he is ";

		if (playerAbsent[cntPlayers] == false)
			cout << "playing today.";
		else
			cout << "not playing today.";

		cout << endl;
	}

	system("pause");
	return 0;
}