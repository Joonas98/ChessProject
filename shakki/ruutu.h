#pragma once


// Shakkilaudan ruutu tietyss� (rivi, sarake) -koordinaatissa.
class Ruutu {
public:
	Ruutu(int, int);
	Ruutu() {}
	
	int getX();
	int getY();
	void setRivi(int);
	void setSarake(int);

private:
	int _sarake;
	int _rivi;
};
