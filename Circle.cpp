#include "Circle.h"

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

//default constructor
Circle::Circle():radius(0){

}

//regular constructor
Circle::Circle(double radius):radius(radius){

}

//setter
double Circle::get_radius(){
	return radius;
}

//setter
void Circle::set_radius(double radius){
	this->radius = radius;
}


/*
Purpose:
	The purpose of the function is to read the info of the shape we are trying
	to create
Inputs:
	inf = the input file we are reading from
Outputs:
	none
*/
void Circle::readInfo(ifstream& inf){
	double centerX, centerY;
	double radius;
	int r, g, b;
	
	inf >> centerX >> centerY;
	pts.push_back(Point(centerX, centerY));
	
	inf >> radius;

	set_radius(radius);

	inf >> r >> g >> b;

	c.setColorR(static_cast<unsigned char>(r));
	c.setColorG(static_cast<unsigned char>(g));
	c.setColorB(static_cast<unsigned char>(b));
}


/*
Purpose:
	The purpose of the function is to see if the inputed point lies withing the
	shape
Inputs:
	test = the point that is being tested
Outputs:
	inside = return 1 if the point is inside the circle and 0 if it does not
*/
bool Circle::isHit(Point& test){
	bool inside;
	double hit;
	hit = sqrt(pow(test.getx() - pts.at(0).getx(),2) + pow(test.gety() - 
		pts.at(0).gety(),2));
	if(hit < get_radius())
		inside = 1;
	else
		inside = 0;

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
void Circle::draw(Image& image){
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
