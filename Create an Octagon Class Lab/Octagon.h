#ifndef _OCTAGON
#define _OCTAGON

class Octagon {
private:
	int side;
	int spacesDrawn, starsDrawn, spacesOut, spacesIn, rowsDrawn, rowsToDraw;
public:
	Octagon();
	Octagon(const int sidePar);
	void setSide(const int sidePar);
	int getSide() const;
	void display(const int sidePar);
};
#endif