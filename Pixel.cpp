#include "Pixel.h"

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

// Default constructor
Pixel::Pixel():r(0),g(0),b(0){
	
}

//Regular Constructor
Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b):r(r),g(g),b(b){
	
}

//Setters
void Pixel::setR(unsigned char r){
	this->r = r;
}
void Pixel::setG(unsigned char g){
	this->g = g;
}
void Pixel::setB(unsigned char b){
	this->b = b;
}

//Getters
unsigned char Pixel::getR(void){
	return this->r;
}
unsigned char Pixel::getG(void){
	return this->g;
}
unsigned char Pixel::getB(void){
	return this->b;
}
