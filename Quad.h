#ifndef QUAD_H
#define QUAD_H

#include "Shape.h"
#include "Point.h"
#include "Triangle.h"
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

class Quad:public Shape{

	private:
	

	public:

		bool isHit(Point& test);

		void readInfo(ifstream& inf);

		void draw(Image&);

};

#endif
