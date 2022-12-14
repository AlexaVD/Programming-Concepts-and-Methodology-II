#include<iostream>
using namespace std;

//function prototypes
double mySquareIt(int numPar);
void myExponentFunction(int basePar,   int exponentPar,   int& resultOfXToThePowerYPar);

int main() {
    //declarations
    int userNum;
    int myBase;
    int myExponent;
    int resultOfXToTheY;
    char tryAgain = 'Y';

    while (tryAgain ==   'Y' || tryAgain ==   'y') {
        //get user input
        cout  << "Enter a whole number: ";
        cin  >> userNum;
        //calculation and output
        cout  << userNum  << " squared equals " << mySquareIt(userNum)  << endl;
        cout  << endl;
        cout  << "Enter a base number: ";
        cin  >> myBase;
        cout  << "Enter an exponent number: ";
        cin  >> myExponent;
        myExponentFunction(myBase, myExponent, resultOfXToTheY);
        cout  << myBase  << " raised by " << myExponent  << " = " << resultOfXToTheY  << endl;
        cout  << "Try again (Y/N): ";
        cin  >> tryAgain;
    }
    system("pause");
    return 0;
}

//function definitions
double mySquareIt(int numPar) {
    //return numPar * numPar;
    //return pow((double)numPar, 2.0);
    return pow(numPar, 2.0);   //rely on implicit promotion by the compiler
}
void myExponentFunction(int basePar,   int exponentPar,   int&   resultOfXToThePowerYPar) {
    resultOfXToThePowerYPar = pow(basePar,   exponentPar);
}
