#include"Cube.h"
using namespace std;
#include<iostream>



Cube::Cube() {
    side = 5;
}

int Cube::getSide() {
    return side;
}

void Cube::setSide(int sidePar) {
    if (sidePar % 2 == 1 && sidePar >= 5) {
        side = sidePar;
    }

}

void Cube::displayCube() {
    //declarations
    spaceBefore = side - 1;
    spaceBetween = side - 2;
    spacesOnRightFace = 0;

    drawSpaces(spaceBefore);  //draw initital spaces
    drawStars(side); //draw the stars
    cout << endl;

    spaceBefore -= 1;
    for (int i = 0; i < side - 2; i++)
    {

        drawSpaces(spaceBefore); //draw spaces
        drawStars(1); //draw a star
        drawSpaces(spaceBetween); // draw between spaces
        drawStars(1); // draw a star
        drawSpaces(spacesOnRightFace);// draw spaces on right face
        drawStars(1); // draw a star

        cout << endl;
        spaceBefore -= 1;
        spacesOnRightFace += 1;
    }

    drawStars(side);
    drawSpaces(spacesOnRightFace);
    drawStars(1);

    for (int i = 0; i < side - 2; i++)
    {
        cout << endl;
        drawStars(1);
        drawSpaces(spaceBetween);
        drawStars(1);
        drawSpaces(spacesOnRightFace -= 1);
        drawStars(1);
    }

    cout << endl;
    drawStars(side);
}

void Cube::drawSpaces(int numOfSpaces) {
    for (int i = 0; i < numOfSpaces; i++)
    {
        cout << " ";
    }
}

void Cube::drawStars(int numOfStars) {
    for (int i = 0; i < numOfStars; i++)
    {
        cout << "*";
    }
}