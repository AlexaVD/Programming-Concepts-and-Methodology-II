#include<iostream>
#include<string>
using namespace std;

int main() {
 //declarations
 string bookTitle = "";
 int yearPublished;
 string *bookTitlePtr;
 int *yearPublishedPtr;
 bookTitlePtr = &bookTitle; //& is called the "address of" operator
 yearPublishedPtr = &yearPublished;
 ////*************** version 1 ***************
 ////get user input
 //
 //cout << "Type the book title: ";
 ////cin >> bookTitle;
 //getline(cin, bookTitle);
 //cout << "Type the year published: ";
 //cin >> yearPublished;
 ////output
 //cout << endl;
 ////this is the clear way of doing things
 //cout << "Book Title: " << bookTitle << endl;
 //cout << "Year Published: " << yearPublished << endl;
 //*************** version 2 ***************
 //*************** use pointers ************
 //get user input
 cout << "Type the book title: ";
 cin >> *bookTitlePtr;
 cout << "Type the year published: ";
 cin >> *yearPublishedPtr;
 //output
 cout << "Book Title: " << *bookTitlePtr << endl;
 cout << "Year Published: " << *yearPublishedPtr << endl;
 cout << "Book Title Address: " << bookTitlePtr << endl; //displays the address
 cout << "Year Published Address: " << yearPublishedPtr << endl;
 
 return 0;
}