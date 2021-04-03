//
//  Boxes.cpp
//  CS202HW4
//
//  Created by Alden Ahern on 4/2/21.
//

#include "Boxes.hpp"

Box::Box(int width, int height):_width(width),_height(height){}
FilledBox::FilledBox():Box(1, 1){}
HollowBox::HollowBox():Box(1, 1){}
CheckeredBox::CheckeredBox():Box(1, 1){}

// these can be combined
string Box::constructFull(const int length){return string(length,'x');}
string Box::constructEmpty(const int length){return string(length,32);}

int Box::getWidth(){return _width;}
int Box::getHeight(){return _height;}

void Box::setWidth(int const &width){_width=width;}
void Box::setHeight(int const &height){_height=height;}

string CheckeredBox::drawLine(const int length, const int row){
    string line = "";
    auto holder = length;
    
    if(row%2 == 1){line += " "; holder--;}
    
    for(int i=0; i < (length+1)/2; i++){
        line += "x ";
    }
    return line;
}

ostream &operator<<(ostream &os,const Box &b){
    b.print(os);
    return os;
}
