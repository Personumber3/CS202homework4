//
//  Boxes.cpp
//  CS202HW4
//
//  Created by Alden Ahern on 4/2/21.
//

#include "Boxes.hpp"

Box::Box(int width, int height):_width(width),_height(height){}

// these can be combined
string Box::constructFullBox(const int length){return string(length,88);}
string Box::constructEmptyBox(const int length){return string(length,32);}

int Box::getBoxWidth(){return _width;}
int Box::getBoxHeight(){return _height;}

string CheckeredBox::drawBoxLine(const int length, const int row){
    string line = "";
    auto holder = length;
    
    if(!row%2){line += " "; holder--;}
    
    for(int i=0; i < (length+1)/2; i++){
        line += "x ";
    }
    return line;
}
