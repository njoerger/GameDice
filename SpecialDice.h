#ifndef SPECIALDICE_H
#include <string>
#include "Dice.h"

class SpecialDice: public Dice{
	private:
		bool special;
		std::string type;
	public:
		SpecialDice();
		SpecialDice(SpecialDice&);
		SpecialDice(int, std::string);

		bool setSpecial(bool);
		bool getSpecial();

		bool setType(std::string);
		std::string getType();
};
#endif
