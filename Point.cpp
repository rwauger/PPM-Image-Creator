#include "Point.h"

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

//default constructor
Point::Point(){
	this->x = 0;
	this->y = 0;
}

//regular constructor
Point::Point(double x, double y){
	this->x = x;
	this->y = y;
}

//getter
double Point::getx(){
	return x;
}

//getter
double Point::gety(){
	return y;
}

//setter
void Point::setx(double x){
	this->x = x;
}

//setter
void Point::sety(double y){
	this->y = y;
}