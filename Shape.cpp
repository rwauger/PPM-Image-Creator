#include "Shape.h"

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

vector <Point> Shape::getPoints() const{
	return this->pts;
}

void Shape::setName(string name){
	this->name = name;
}

string Shape::getName() const{
	return this->name;
}