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

string Box::constructFull(const int length) const {return string(length,'x');}
string Box::constructEmpty(const int length) const {return string(length,32);}

const int Box::getWidth() const {return _width;}
const int Box::getHeight() const {return _height;}

void Box::setWidth(int const &width){_width=width;}
void Box::setHeight(int const &height){_height=height;}

string CheckeredBox::drawLine(const int length, const int row) const {
    string line = "";
    auto holder = length;
    
    if(row%2 == 1){line += " "; holder--;}
    
    for(int i=0; i < (length+1)/2; i++){
        line += "x ";
    }
    return line;
}

ostream &operator<<(ostream &os,Box &b){
    b.print(os);
    return os;
}
ostream &operator<<(ostream &os,const Box &b){
    b.print(os);
    return os;
    
}


unique_ptr<Box> boxFactory(char c, int w, int h){
    if(c=='f'){return std::make_unique<FilledBox>(w,h);}
    else if(c=='h'){return std::make_unique<HollowBox>(w,h);}
    else if(c=='c'){return std::make_unique<CheckeredBox>(w,h);}
    cout << "you inputted an invalid character, try 'f','h', or 'c'." << endl;
    return std::make_unique<Box>(1,1);
    
}
