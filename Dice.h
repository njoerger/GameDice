#include <string>
#ifndef DICE_H

class Dice{
	private:
		int value;
		int numberOfSides;
	protected:
		bool setValue(int);
	public:
		Dice(Dice&);
		Dice();
		Dice(int);
		int getValue();
		int getNumberOfSides();
		bool setNumberOfSides(int);
		bool newRandomValue(int seed); //need to look how to have defualt values
};
#endif
