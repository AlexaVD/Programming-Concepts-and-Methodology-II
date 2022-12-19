#include<iostream>
#include<string>
using namespace std;

void myPassByValueFunction(string strPar);
void myPassbyReferenceFunction(string *strPtrPar);


int main() {
	//declarations
	string name = "Robert";

	myPassbyReferenceFunction(&name);
	cout << name << endl;
	myPassByValueFunction(name);
	cout << name << endl;

	system("pause");
	return 0;
}

void myPassByValueFunction(string strPar) {
	strPar = "Jackson";
}

void myPassbyReferenceFunction(string *strPtrPar) {
	*strPtrPar = "Joshua";
}