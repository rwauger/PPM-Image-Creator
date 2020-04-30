#include <iostream>
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

#ifndef POINT_H
#define POINT_H

class Point{

	private:
		double x;
		double y;
	
	public:

		//setter
		void setx(double); 

		//setter
		void sety(double); 

		//getter
		double getx(); 

		//getter
		double gety(); 

		//default constructor
		Point();

		//regular constuctor
		Point(double x, double y);
};

#endif