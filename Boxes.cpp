//
//  Boxes.cpp
//  CS202HW4
//
//  Created by Alden Ahern on 4/2/21.
//

#include "Boxes.hpp"

Box::Box(int width, int height):_width(width),_height(height){}
Box::Box():_width(1),_height(1){}

// these can be combined
string Box::constructFullBox(const int length){return string(length,'x');}
string Box::constructEmptyBox(const int length){return string(length,32);}

int Box::getWidth(){return _width;}
int Box::getHeight(){return _height;}

void Box::setWidth(int const &width){_width=width;}
void Box::setHeight(int const &height){_height=height;}

string CheckeredBox::drawBoxLine(const int length, const int row){
    string line = "";
    auto holder = length;
    
    if(row%2 == 1){line += " "; holder--;}
    
    for(int i=0; i < (length+1)/2; i++){
        line += "x ";
    }
    return line;
}
