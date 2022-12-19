#include<iostream>
#include<string>
using namespace std;

const int NUMOFENTRIES = 10;
void userEntry(int userNumsArr[]);
void ifSubsetIsPowerOfTwoDisplayResults(int userNumsArr[], int multiplierArr[]);
void generateNextMultipliers(int multiplierArr[]);
int getMultiplierArrSum(int multiplierArr[]);
int getSumOfUsersNumbers(int userNumsArr[], int multiplierArr[]);
bool isInvestigatedEveryPossibility(int multiplierArr[]);

int main() {
	//declarations
	int userNumsArr[NUMOFENTRIES];
	int multiplierArr[] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	//get user input
	userEntry(userNumsArr);

	//calculation & output
	ifSubsetIsPowerOfTwoDisplayResults(userNumsArr, multiplierArr);

	system("pause");
	return 0;
}

bool isInvestigatedEveryPossibility(int multiplierArr[]) {
	int sum = 0;

	for (int i = 0; i < NUMOFENTRIES; i++)
		sum = sum + multiplierArr[i];

	if (sum == NUMOFENTRIES)
		return true;
	else
		return false;
}

int getSumOfUsersNumbers(int userNumsArr[], int multiplierArr[]) {
	int sumOfUsersNumbers = 0;


	for (int i = 0; i < NUMOFENTRIES; i++) {
		if (multiplierArr[i] == 1)
			sumOfUsersNumbers = sumOfUsersNumbers + userNumsArr[i];
	}

	return sumOfUsersNumbers;
}

int getMultiplierArrSum(int multiplierArr[]) {
	int multiplierSum = 0;
	int cnt;

	//determine the sum of the multiplierArr (e.g., if multiplierArr = {0,0,0,0,0,0,0,1,0,1}
	//then the sum is 1x2^0 + 0x2^1 + 1x2^2 = 5 assuming we start from the RHS.
	for (cnt = 0; cnt < NUMOFENTRIES; cnt++) {
		multiplierSum = multiplierSum + multiplierArr[cnt] * pow(2, cnt);
	}
	return multiplierSum;
}

void generateNextMultipliers(int multiplierArr[]) {
	int multiplierSum = 0;
	int cnt;

	multiplierSum = getMultiplierArrSum(multiplierArr);
	multiplierSum++; //increment this value for the next multiplierArr configuration

	//establish the new multiplierArr values based on the recent increment of multiplierSum
	for (cnt = NUMOFENTRIES-1; cnt >= 0; cnt--) {
		if (multiplierSum >= pow(2, cnt)) {
			multiplierSum = multiplierSum - pow(2, cnt);
			multiplierArr[cnt] = 1;
		}
		else
			multiplierArr[cnt] = 0;
	}
}

void ifSubsetIsPowerOfTwoDisplayResults(int userNumsArr[], int multiplierArr[]) {
	int sumOfUserNums = 0;
	int pwr;
	string output = "";
	bool isASubsetFound = false;

	while (isInvestigatedEveryPossibility(multiplierArr) == false && !isASubsetFound) {
		sumOfUserNums = getSumOfUsersNumbers(userNumsArr, multiplierArr);
		for (pwr = 0; pow(2, pwr) <= sumOfUserNums; pwr++) {
			if (sumOfUserNums == pow(2, pwr)) {
				output = "The following subset sums to a power of 2\n\n";
				for (int i = 0; i < NUMOFENTRIES; i++) {
					if (multiplierArr[i] == 1)
						output = output + to_string(userNumsArr[i]) + " + ";
				}
				output = output.substr(0, output.length() - 2); //remove last plus symbol from the string.
				output = output + " = " + to_string(sumOfUserNums);
				isASubsetFound = true;
				break;
			}
		}//for (pwr = 0; pow(2, pwr) <= sumOfUserNums; pwr++)
		generateNextMultipliers(multiplierArr); //since no solution was found try a new combination of user numbers
	}//while (isInvestigatedEveryPossibility(multiplierArr) == false || isASubsetFound)
	

	if (isASubsetFound == false) {
		output = output + "No subset sums to a power of 2.";
	}

	cout << output << endl;
}

void userEntry(int userNumsArr[]) {
	int cntUserNumIndex;
	
	cntUserNumIndex = 0;
	while (cntUserNumIndex < NUMOFENTRIES) {
		cout << "Enter number " << (cntUserNumIndex + 1) << ": ";
		cin >> userNumsArr[cntUserNumIndex];
		cntUserNumIndex++;
	}
}