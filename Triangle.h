#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include "Point.h"
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

class Triangle:public Shape{

	private:

	public:

		Point getPoints()const;

		bool isHit(Point& test);

		void readInfo(ifstream& inf);

		void draw(Image&);

};

#endif
