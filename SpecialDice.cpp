#include "SpecialDice.h"
#include <cstdlib>
#include <string>
using namespace std;

SpecialDice::SpecialDice():Dice(){
	special = 1;
	type = "unkown";
}
SpecialDice::SpecialDice(SpecialDice &cpy):Dice(cpy){
	special = cpy.getSpecial();
	type = cpy.getType();
}
SpecialDice::SpecialDice(int side, std::string typ):Dice(side){
	special = 1;
	type = typ;
}
bool SpecialDice::setType(std::string typ){
	type = typ;
}
std::string SpecialDice::getType(){
	return type;
}
bool SpecialDice::setSpecial(bool spec){
	special = spec;
	return true;
}
bool SpecialDice::getSpecial(){
	return special;
}
