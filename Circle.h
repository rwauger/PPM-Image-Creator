#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Point.h"
#include <math.h>
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

class Circle:public Shape{

	private:
		double radius;

	public:
		//default constructor
		Circle();

		//regular constuctor
		Circle(double radius);

		bool isHit(Point& test);

		void readInfo(ifstream& inf);

		void draw(Image&);

		//getter
		double get_radius();

		//setter
		void set_radius(double radius);


};

#endif
