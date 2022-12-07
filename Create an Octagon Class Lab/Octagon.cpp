#include "Octagon.h"
#include<iostream>
#include<string>
using namespace std;

Octagon::Octagon() {
	side = 3;
}

Octagon::Octagon(const int sidePar) {
	side = sidePar;
}

void Octagon::setSide(const int sidePar) {
	if (sidePar < 3 || sidePar > 8)
		cout << "The side value must be between 3 an 8" << endl;
	else
		side = sidePar;
}

int Octagon::getSide() const {
	return side;
}

void Octagon::display(const int sidePar) {
	if (sidePar < 3 || sidePar > 8) {
		system("cls");
		cout << "The side value must be between 3 and 8" << endl;
	}
	else {

		string output = ""; // clear the output

		spacesDrawn = 0;
		starsDrawn = 0;
		spacesOut = side - 1;
		spacesIn = 0;
		rowsDrawn = 0;
		rowsToDraw = 2 * side + (side - 2);

		while (rowsDrawn < rowsToDraw) {
			if (rowsDrawn == 0) {
				spacesDrawn = 0;
				while (spacesDrawn < spacesOut) {
					output = output + " ";
					spacesDrawn++;
				}
				starsDrawn = 0;
				while (starsDrawn < side) {
					output = output + "*";
					starsDrawn++;
				}
				spacesOut--;
				spacesIn = side;
				rowsDrawn++;
				output = output + "\n";
			}
			else if (rowsDrawn < side) {
				spacesDrawn = 0;
				while (spacesDrawn < spacesOut) {
					output = output + " ";
					spacesDrawn++;
				}
				output = output + "*";
				spacesDrawn = 0;
				while (spacesDrawn < spacesIn) {
					output = output + " ";
					spacesDrawn++;
				}
				output = output + "*";
				spacesOut--;
				spacesIn = spacesIn + 2;
				rowsDrawn++;
				output = output + "\n";
			}
			else if (rowsDrawn < (2 * side - 1)) {
				output = output + "*";
				spacesDrawn = 0;
				while (spacesDrawn < (2 * side + (side - 4))) {
					output = output + " ";
					spacesDrawn++;
				}
				output = output + "*";
				spacesOut = 1;
				rowsDrawn++;
				output = output + "\n";
			}
			else if (rowsDrawn < 2 * side + (side - 3)) {
				spacesDrawn = 0;
				while (spacesDrawn < spacesOut) {
					output = output + " ";
					spacesDrawn++;
				}
				output = output + "*";
				spacesDrawn = 0;
				while (spacesDrawn < spacesIn - 4) {
					output = output + " ";
					spacesDrawn++;
				}
				output = output + "*";
				spacesOut++;
				spacesIn = spacesIn - 2;
				rowsDrawn++;
				output = output + "\n";
			}
			else if (rowsDrawn < (2 * side + (side - 2))) {
				spacesDrawn = 0;
				while (spacesDrawn < spacesOut) {
					output = output + " ";
					spacesDrawn++;
				}
				starsDrawn = 0;
				while (starsDrawn < side) {
					output = output + "*";
					starsDrawn++;
				}
				rowsDrawn++;
			}
		} //end of while
		cout << endl << output << endl;
	}
}