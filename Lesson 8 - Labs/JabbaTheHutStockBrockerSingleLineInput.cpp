//Try these sample input values 
//10 11 7 10 6 results in buy on day 3 sell on day 4
//100 112 110 85 105 102 86 63 81 101 94 106 101 79 94 90 97 results in buy on day 8 sell on day 12
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	//declarations
	vector<int> userNums;
	string userStringOfNums = "";
	string token = "";
	int indexCounter = 0;
	int lengthOfMessage;
	int locationOfSpace;
	int maximumProfit = 0;
	int buyDayIndex = 0;
	int sellDayIndex = 0;
	int bestBuyDayIndex = 0;
	int bestSellDayIndex = 0;

	//get user input
	getline(cin, userStringOfNums);


	//calculation
	//**************************************************************
	//get the individual numbers and place them into a vector
	//**************************************************************
	lengthOfMessage = (int)userStringOfNums.length();
	locationOfSpace = (int)userStringOfNums.find(" ", 0); //locate a space starting at index 0
	indexCounter = 0;

	while (locationOfSpace != -1) {
		token = userStringOfNums.substr(indexCounter, locationOfSpace - indexCounter); //get next number from userStringOfNums string
		userNums.push_back(stoi(token));
		indexCounter = locationOfSpace + 1;// "10 11 ..."
		locationOfSpace = (int)userStringOfNums.find(" ", locationOfSpace + 1);
	}
	//grab the last item entered by the user since the above code grabs everything
	//up to and including the second to last item.
	token = userStringOfNums.substr(indexCounter, lengthOfMessage - indexCounter);
	userNums.push_back(stoi(token));

	//calculation
	//do a brute force search with a nested loop to find the lowest low followed by
	//the highest high
	for (int i = 0; i < userNums.size() - 1; i++) {
		buyDayIndex = i;
		for (int j = i + 1; j < userNums.size(); j++) {
			sellDayIndex = j;
			if (userNums[sellDayIndex] - userNums[buyDayIndex] > maximumProfit) {
				maximumProfit = userNums[sellDayIndex] - userNums[buyDayIndex];
				bestBuyDayIndex = buyDayIndex;
				bestSellDayIndex = sellDayIndex;
			}
		}
	}
	//output
	cout << "Jabba should buy on day " << bestBuyDayIndex+1 << " and sell on day " << bestSellDayIndex +1 << endl;

	system("pause");
	return 0;
}