#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <vector>
#include "Color.h"
#include "Point.h"
#include "Image.h"
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/


class Shape
{
	protected:
		Color c;
		string name;
		vector <Point> pts;

	public:
		virtual void readInfo(ifstream&) = 0;
		virtual bool isHit(Point&) = 0;
		virtual void draw(Image&) = 0;
		vector <Point> getPoints()const;
		void setName(string);
		string getName() const;

};

#endif
