#ifndef PIXEL_H
#define PIXEL_H
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

class Pixel
{
  private:
		unsigned char r;
		unsigned char g;
		unsigned char b;    

  public:
  	// Constructors
  	Pixel();
  	Pixel(unsigned char r, unsigned char g, unsigned char b);

  	// Setters
  	void setR(unsigned char r);
    void setG(unsigned char g);
    void setB(unsigned char b);

  	// Getters
  	unsigned char getR(void);
  	unsigned char getG(void);
  	unsigned char getB(void);

};

#endif