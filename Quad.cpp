#include "Quad.h"

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/


/*
Purpose:
	The purpose of the function is to print the pixels to the output image
Inputs:
	inf = the file that is being read in
Outputs:
	none
*/
void Quad::readInfo(ifstream& inf){
	double p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y;
	int r, g, b;
	
	inf >> p1x >> p1y;
	pts.push_back(Point(p1x,p1y));
	inf >> p2x >> p2y;
	pts.push_back(Point(p2x,p2y));
	inf >> p3x >> p3y;
	pts.push_back(Point(p3x,p3y));
	inf >> p4x >> p4y;
	pts.push_back(Point(p4x,p4y));
	inf >> r >> g >> b;

	c.setColorR(static_cast<unsigned char>(r));
	c.setColorG(static_cast<unsigned char>(g));
	c.setColorB(static_cast<unsigned char>(b));
}

/*
Purpose:
	The purpose of the function is to see if the inputed test point is inside of
	the shape
Inputs
	test = the point being tested
Outputs:
	inside = returns 1 if the point is inside the shape and 0 if it is not
*/
bool Quad::isHit(Point& test){
	double a, b, c;
	bool inside = 0;

	//Barycentric Coordinate System
	a = ((pts.at(1).gety()-pts.at(2).gety()) *
			(test.getx()-pts.at(2).getx()) +
		  (pts.at(2).getx()-pts.at(1).getx()) * 
		  (test.gety()-pts.at(2).gety()))/
		  ((pts.at(1).gety()-pts.at(2).gety()) *
		  (pts.at(0).getx()-pts.at(2).getx()) +
		  (pts.at(2).getx()-pts.at(1).getx()) *
			(pts.at(0).gety()-pts.at(2).gety()));

	b = ((pts.at(2).gety()-pts.at(0).gety()) *
      (test.getx()-pts.at(2).getx()) +
      (pts.at(0).getx()-pts.at(2).getx()) *
			(test.gety()-pts.at(2).gety()))/
			((pts.at(1).gety()-pts.at(2).gety()) *
		  (pts.at(0).getx()-pts.at(2).getx()) +
		  (pts.at(2).getx()-pts.at(1).getx()) *
			(pts.at(0).gety()-pts.at(2).gety()));

	c = 1 - a - b;


	//check to see if the point falls inside the Quad
	if(a >= 0 && a <= 1 && b >= 0 && b <= 1 && c >= 0 && c <= 1){
		inside = 1;
	}

	a = ((pts.at(2).gety()-pts.at(3).gety()) *
			(test.getx()-pts.at(3).getx()) +
		  (pts.at(3).getx()-pts.at(2).getx()) * 
		  (test.gety()-pts.at(3).gety()))/
		  ((pts.at(2).gety()-pts.at(3).gety()) *
		  (pts.at(1).getx()-pts.at(3).getx()) +
		  (pts.at(3).getx()-pts.at(2).getx()) *
			(pts.at(1).gety()-pts.at(3).gety()));

	b = ((pts.at(3).gety()-pts.at(1).gety()) *
      (test.getx()-pts.at(3).getx()) +
      (pts.at(1).getx()-pts.at(3).getx()) *(test.gety()-pts.at(3).gety()))/
			((pts.at(2).gety()-pts.at(3).gety()) *
			(pts.at(1).getx()-pts.at(3).getx()) +
			(pts.at(3).getx()-pts.at(2).getx()) *
			(pts.at(1).gety()-pts.at(3).gety()));

	c = 1 - a - b;


	//check to see if the point falls inside the Quad
	if(a >= 0 && a <= 1 && b >= 0 && b <= 1 && c >= 0 && c <= 1){
		inside = 1;
	}

	a = ((pts.at(3).gety()-pts.at(0).gety()) * (test.getx()-pts.at(0).getx()) +
		  (pts.at(0).getx()-pts.at(3).getx()) * (test.gety()-pts.at(0).gety()))/
		  ((pts.at(3).gety()-pts.at(0).gety()) *
		  (pts.at(2).getx()-pts.at(0).getx()) +
		  (pts.at(0).getx()-pts.at(3).getx()) *
			(pts.at(2).gety()-pts.at(0).gety()));

	b = ((pts.at(0).gety()-pts.at(2).gety()) * (test.getx()-pts.at(0).getx()) +
      (pts.at(2).getx()-pts.at(0).getx()) * (test.gety()-pts.at(0).gety()))/
			((pts.at(3).gety()-pts.at(0).gety()) * (pts.at(2).getx()-pts.at(0).getx()) 
			+ (pts.at(0).getx()-pts.at(3).getx())*
			(pts.at(2).gety()-pts.at(0).gety()));

	c = 1 - a - b;


	//check to see if the point falls inside the Quad
	if(a >= 0 && a <= 1 && b >= 0 && b <= 1 && c >= 0 && c <= 1){
		inside = 1;
	}

return inside;
}

/*
Purpose:
	The purpose of the function is to change the pixels to the correct color 
	of the shape
Inputs:
	image = the image that is having its pixels changed
Outputs:
	none
*/
void Quad::draw(Image& image){
	int i, j;
	for(i = 0; (unsigned int)i < 800; i++){
		for(j = 0; (unsigned int)j < 800; j++){
			Point pt(j, i);
			if(isHit(pt)){
				image.setPixels(c.getColorR(), c.getColorG(), c.getColorB(), i, j);
			}
		}
	}
}
