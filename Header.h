#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

class Header
{
  private:
  	string magicNum;
  	int width;
  	int height;
  	int maxVal;
    
  public:
  	// Constructors
  	Header();
  	Header(string magicNum, int width, int height, int maxVal);

  	// Setters
  	void setmagicNum(string magicNum);
  	void setWidth(int width);
  	void setHeight(int height);
  	void setmaxVal(int maxVal);

    // Getters
    string getmagicNum(void);
    int getWidth(void);
    int getHeight(void);
    int getmaxVal(void);

};

#endif