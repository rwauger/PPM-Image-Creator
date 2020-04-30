#include "Image.h"

/*************************
 *Ryan Auger
 *CPSC 1020 001, F18
 *rwauger@g.clemson.edu
 *************************/

/*
Purpose:
	The purpose of the function is to set the pixels for the shape 
Inputs:
	r = the red color value
	g = the green color value
	b = the blue color value
	row = the row of the image
	col = the column of the image
Outputs:
	none
*/
void Image::setPixels(unsigned char r, unsigned char g, unsigned char b, 
	int row, int col){
	pix.at(row).at(col).setR(r);
	pix.at(row).at(col).setG(g);
	pix.at(row).at(col).setB(b);
}

/*
Purpose:
	The purpose of the function is set the header values for both the image that
	needs to be resized and the image that is resized
Inputs:
	inf = the input file
Outputs:
	none
*/
void Image::setHeader(string magicNum, int width, int height, int maxVal){
	header.setmagicNum(magicNum);
	header.setWidth(width);
	header.setHeight(height);
	header.setmaxVal(maxVal);
}

/*
Purpose:
	The purpose of the function is to fill the 2D vector with pixels
Inputs:
	inf = the input file
Outputs:
	none
*/
void Image::fillVec(){
	//unsigned char r, g, b;
	pix.resize(header.getHeight(), vector<Pixel>(header.getWidth()));

	for(unsigned int (i) = 0; i < pix.size(); i++){
		for(unsigned int (j) = 0; j < pix.at(i).size(); j++){
			//inf >> r >> g >> b;
			pix.at(i).at(j).setR(0);
			pix.at(i).at(j).setG(0);
			pix.at(i).at(j).setB(0);
		}
	}
}

/*
Purpose:
	The purpose of the function is to print the pixels to the output image
Inputs:
	outf = the output file we are writing to
Outputs:
	none
*/
void Image::printVec(ofstream &outf){
	unsigned char r, g, b;

	outf << header.getmagicNum() << " " << header.getWidth()
		<< " " << header.getHeight() << " " << header.getmaxVal()
		<< " ";
	for(unsigned int (i) = 0; i < pix.size(); i++){
		for(unsigned int (j) = 0; j < pix.at(i).size(); j++){
			r = pix.at(i).at(j).getR();
			g = pix.at(i).at(j).getG();
			b = pix.at(i).at(j).getB();
			outf << r << g << b;
		}
	}

}
