/*
vecList[index] returns the element at the position specified by the index
vecList.front() return the first element 
vecList.back() return the last element
vecList.clear() deletes all elements from the object
vecList.push_back(elem) a copy of elem is inserted into vecList at the end
vecList.pop_back() delete the last element of vecList
vecList.empty() returns true if the object vecList is empty and false otherwise
vecList.size() return the number of elements currently in the object vecList
vecList.max_size return the max number of elements that can be inserted in the object
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printPlayerInfo(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar);
void addPlayer(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar);
void changeStatus(vector<string>& namePar, vector<bool>& statusPar);
void removePlayer(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar);

int main() {
	//declarations
	vector<int>playerNumbers;
	vector<string>playerNames;
	vector<bool>playerAbsent;

	int actionRequest;
	char playingToday = 'N';
	bool isActive = true;

	//get user input
	while (isActive == true) {
		cout << "0 - Quit" << endl;
		cout << "1 - Add a player to the team" << endl;
		cout << "2 - Remove a player from the team" << endl;
		cout << "3 - Change status of a player" << endl;
		cout << "4 - Display team information" << endl;
		cout << endl;

		cin >> actionRequest;

		if (actionRequest == 0) {
			isActive = false;
		}
		else if (actionRequest == 1) {
			addPlayer(playerNames, playerNumbers, playerAbsent);
		}
		else if (actionRequest == 2) {
			removePlayer(playerNames, playerNumbers, playerAbsent);
		}
		else if (actionRequest == 3) {
			changeStatus(playerNames, playerAbsent);
		}
		else if (actionRequest == 4) {
			printPlayerInfo(playerNames, playerNumbers, playerAbsent);
		}
		cout << endl << endl;
	}

	//calculation

	//output
	
	system("pause");
	return 0;
}

void printPlayerInfo(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar) {

	int numOfPlayers;
	numOfPlayers = namePar.size();

	for (int i = 0; i < numOfPlayers; i++) {
		cout << namePar[i] << "'s jersey number is " << numPar[i] << " and is";
		if (statusPar[i] == true) {
			cout << " playing today";
		}
		else  {
			cout << " not playing today";
		}
		cout << endl;
	}
}
void addPlayer(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar) {
	string name; //player name
	int num; //jersey number
	char availableYesOrNo;

	cout << "What is the player's name: ";
	cin >> name;
	cout << "What is " << name << "'s jersey number: ";
	cin >> num;
	cout << "Is " << name << " available to play (Y/N): ";
	cin >> availableYesOrNo;

	if (availableYesOrNo == 'y' || availableYesOrNo == 'Y') {
		statusPar.push_back(true);
	}
	else {
		statusPar.push_back(false);
	}

	namePar.push_back(name);
	numPar.push_back(num);

}
void changeStatus(vector<string>& namePar, vector<bool>& statusPar) {
	bool found = false;
	string playerName;
	char availableYesOrNo;
	int sizeOfVector;
	int cnt;

	cout << "What is the player's name: ";
	cin >> playerName;

	cout << "Is " << playerName << " available to play (Y/N): ";
	cin >> availableYesOrNo;

	sizeOfVector = namePar.size(); //how many kids are on team
	//determine the index based on the player's name
	cnt = 0;
	found = false;

	while (cnt < sizeOfVector && !found) {
		if (namePar[cnt] == playerName) {
			found = true;
		}
		else {
			cnt++;
		}
	}//while (cnt < sizeOfVector && !found)

	if (availableYesOrNo == 'y' || availableYesOrNo == 'Y') {
		statusPar[cnt] = true;
	}
	else {
		statusPar[cnt] = false;
	}
}
void removePlayer(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar) {
	string playerName;
	bool foundRecord = false;
	int sizeOfVector; //how many kids are on the team
	int cnt; 

	cout << "What is the player's name: ";
	cin >> playerName;

	sizeOfVector = namePar.size();

	//determine the index based on the player's name
	cnt = 0;
	foundRecord = false;

	while (cnt < sizeOfVector && !foundRecord) {
		if (namePar[0] == playerName) {
			//remove this record from all parallel vectors
			namePar.erase(namePar.begin() + cnt);
			numPar.erase(numPar.begin() + cnt);
			statusPar.erase(statusPar.begin() + cnt);
			foundRecord = true;
			cout << "Record removed" << endl;
		}
		cnt += 1; //get ready to investigate the next element
	}
}