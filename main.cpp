#include <iostream>
#include <fstream>
#include "Image.h"
#include "Triangle.h"
#include "Color.h"
#include "Shape.h"
#include "Circle.h"
#include "Quad.h"
using namespace std;

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

int main(int argc, char *argv[]){
	string shape;
	Image picture;
	//check to see if the right of commands were inputed
	if(argc != 3){
		cout << "Usage Error: <executable> <inputFile> <outputFile>" << endl;
		return -1;
	}

	ifstream inf(argv[1]);	//open file
	ofstream outf(argv[2]);	// open file

	if(!inf.is_open()){
		cout << "File failed to open" << endl;
		exit(EXIT_FAILURE);
	}

	if(!outf.is_open()){
		cout << "File failed to open" << endl;
		exit(EXIT_FAILURE);
	}
	picture.setHeader("P6", 800, 800, 255);
	picture.fillVec();

	inf >> shape;
	
	//for loop to go through each of the shapes
	while(!inf.eof()){
		if(shape.compare("Triangle") == 0){
			Triangle t;
			t.readInfo(inf);
			t.draw(picture);
		}
		else if(shape.compare("Circle") == 0){
			Circle c;
			c.readInfo(inf);
			c.draw(picture);
		}
		else if(shape.compare("Quadrilateral") == 0){
			Quad q;
			q.readInfo(inf);
			q.draw(picture);
		}
		inf>> shape;
	}
	picture.printVec(outf);

	outf.close();
	inf.close();

	return 0;
}
