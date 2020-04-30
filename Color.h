#ifndef COLOR_H
#define COLOR_H
//using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

class Color
{
  private:
	unsigned char r;
	unsigned char g;
	unsigned char b;

  public:
  	// Constructors
  	Color();
  	Color(unsigned char r, unsigned char g, unsigned char b);

  	// Setter
    void setColorR(unsigned char r);
    void setColorG(unsigned char g);
    void setColorB(unsigned char b);

  	// Getters
  	unsigned char getColorR(void);
  	unsigned char getColorG(void);
  	unsigned char getColorB(void);

};

#endif
