#ifndef IMAGE_H
#define IMAGE_H
#include <fstream>
#include <iostream>
#include <string>
#include <stdbool.h>
#include <vector>
#include "Pixel.h"
#include "Header.h"
//#include "Shape.h"
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

class Image
{
  private:
  	vector< vector<Pixel> > pix;
  	Header header;

  public:

  	void setHeader(string magicNum, int width, int height, int maxVal);
    void setPixels(unsigned char r, unsigned char g, unsigned char b, 
      int row, int col);
    void printVec(ofstream &outf);
    void fillVec();

};

#endif
