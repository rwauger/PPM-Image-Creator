#include "Color.h"
//using namespace std;
// Default constructor

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

//default constructor
Color::Color():r(0),g(0),b(0)
{

}

//regular constructor
Color::Color(unsigned char r, unsigned char g, unsigned char b):r(r),g(g),b(b)
{

}

//getter for the red color value
//it return the red value when called
unsigned char Color::getColorR(void)
{
  return r;
}

//getter for the green color value
//it return the green value when called
unsigned char Color::getColorG(void)
{
  return g;
}

//getter for the blue color value
//it return the blue value when called
unsigned char Color::getColorB(void)
{
  return b;
}

//setter for the red color value
//it sets the red value when called
void Color::setColorR(unsigned char r){
  this->r = r;
}

//setter for the green color value
//it sets the green value when called
void Color::setColorG(unsigned char g){
  this->g = g;
}

//setter for the blue color value
//it sets the blue value when called
void Color::setColorB(unsigned char b){
  this->b = b;
}
