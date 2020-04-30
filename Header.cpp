#include "Header.h"

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

// Default Constructor
Header::Header():magicNum("P6"), width(0), height(0), maxVal(255){

}

//Regular Constructor
Header::Header(string magicNum, int width, int height, int maxVal):
				magicNum(magicNum), width(width), height(height), maxVal(maxVal){
}

//Setters
void Header::setmagicNum(string magicNum){
	this->magicNum = magicNum;
}
void Header::setWidth(int width){
	this->width = width;
}
void Header::setHeight(int height){
	this->height = height;
}
void Header::setmaxVal(int maxVal){
	this->maxVal = maxVal;
}

//Getters
string Header::getmagicNum(void){
	return this->magicNum;
}
int Header::getWidth(void){
	return this->width;
}
int Header::getHeight(void){
	return this->height;
}
int Header::getmaxVal(void){
	return this->maxVal;
}