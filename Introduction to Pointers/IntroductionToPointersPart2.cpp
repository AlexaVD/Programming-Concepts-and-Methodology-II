/*
Create a program that calculates the area
and perimeter of a square based on the 
user's side value, using pointers
*/
#include<iostream>
using namespace std;
int main() {
 //declarations
 int side;
 int area;
 int perimeter;
 int *sidePtr;
 int *areaPtr;
 int *perimeterPtr;
 sidePtr = &side;
 areaPtr = &area;
 perimeterPtr = &perimeter;
 //VERSION 1
 //get user input
 cout << "Enter a side value: ";
 cin >> *sidePtr; //cin >> side;
 //calculation
 *areaPtr = pow(side, 2.0);
 *perimeterPtr = 4 * side;
 //output
 cout << "Area: " << *areaPtr << endl;
 cout << "Perimeter: " << *perimeterPtr << endl;
 /*
 //Version 2 is the straight forward way of
 //handling the above
 cout << "Enter a side value: ";
 cin >> side;
 //calculation
 area = pow(side, 2.0);
 perimeter = 4 * side;
 //output
 cout << "Area: " << area << endl;
 cout << "Perimeter: " << perimeter << endl;
 */
 system("pause");
 return 0;
}