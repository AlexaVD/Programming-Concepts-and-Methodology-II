#include<iostream>
using namespace std;
#include"Cube.h"

int main() {
    Cube myCube;
    int userNum;

    cout << "Enter a side value: ";
    cin >> userNum;

    myCube.setSide(userNum);
    myCube.displayCube();


    return 0;
}