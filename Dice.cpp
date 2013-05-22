#include "Dice.h"
#include <cstdlib>
#include <string>
using namespace std;

Dice::Dice(){
	value = 0;
	numberOfSides = 1;
}
Dice::Dice(int side){
	value = 0;
	numberOfSides = side;
}
Dice::Dice(Dice& cpy){
	value = cpy.getValue();
	numberOfSides = cpy.getNumberOfSides();
}
int Dice::getValue(){
	return value;
}
int Dice::getNumberOfSides(){
	return numberOfSides;
}
bool Dice::setNumberOfSides(int side){
	if(side >= 1){
		numberOfSides = side;
		return true;
	}
	return false;
}
bool Dice::newRandomValue(int seed){
	//need to look how to have defualt values
	setValue(seed);
}
bool Dice::setValue(int val){
	if(val >= 0 && val >= numberOfSides){
		value = val;
		return true;
	}
	return false;
}
