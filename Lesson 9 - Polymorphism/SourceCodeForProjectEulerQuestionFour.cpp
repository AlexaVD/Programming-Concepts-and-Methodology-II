/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ◊ 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/
//Answer: 906609
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverseNum(int numberPar);

int main() {
	//declarations 
	int row = 999;
	int col = 999;
	int product = 1;
	int palindrome = 1;
	int maxPalindrome = 1;
	int maxRow = 1;
	int maxCol = 1;
	int divisorMin = 0;

	for (row=999; row>divisorMin; row--) {
		for (col=999; col>divisorMin; col--) {
	//for (row=999; row>=100; row--) {
		//for (col=999; col>=100; col--) {
			product = row * col;
			palindrome = reverseNum(product);
			if (product == palindrome) {
				if (palindrome > maxPalindrome) {
					maxPalindrome = palindrome;
					maxRow = row;
					maxCol = col;
					divisorMin = col;
				}
				break;
			}
		}//for (col = 99; col>divisorMin; col--)
	}//for (row = 99; row>divisorMin; row--)

	cout << "Largest palindrome: " << maxPalindrome << endl;
	cout << maxRow << " x " << maxCol << " = " << maxPalindrome << endl;

	return 0;
}

int reverseNum(int numberPar) {
	string strNum;
	string strReverseNum;

	strNum = to_string(numberPar);
	strReverseNum = strNum;
	reverse(strReverseNum.begin(), strReverseNum.end());

	return stoi(strReverseNum);
}