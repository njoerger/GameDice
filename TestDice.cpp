#include "Dice.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	Dice* d = new Dice();
	cout << "Number of sides: " <<d->getNumberOfSides() << endl;
	cout << "Setting Sides (work 1, didnt 0): "<< d->setNumberOfSides(6) <<endl;
	cout << "Number of sides: " <<d->getNumberOfSides() << endl;
	
	cout << "Setting new Value (work 1, didnt 0): " << d->newRandomValue(10) <<endl;
	cout << "Getting Value: " << d->getValue() <<endl;

	Dice* d1 = new Dice(10);
	cout << "Number of sides: " <<d->getNumberOfSides() << endl;
	cout << "Setting Sides (work 1, didnt 0): "<< d->setNumberOfSides(6) <<endl;
	cout << "Number of sides: " <<d->getNumberOfSides() << endl;
	
	cout << "Setting new Value (work 1, didnt 0): " << d->newRandomValue(10) <<endl;
	cout << "Getting Value: " << d->getValue() <<endl;

	return 1;
}
