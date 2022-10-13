#ifndef _CUBE
#define _CUBE
#include<string>
using namespace std;


class Cube {
private:
    int side;
    int stars;
    int spaceBefore;
    int spaceBetween;
    int spacesOnRightFace;
    int row;
    int col;
    string output;


public:
    Cube();
    int getSide();
    void setSide(int sidePar);
    void displayCube();
    void drawSpaces(int numOfSpaces);
    void drawStars(int numOfStars);


};
#endif 
