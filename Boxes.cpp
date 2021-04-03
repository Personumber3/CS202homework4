//
//  Boxes.cpp
//  CS202HW4
//
//  Created by Alden Ahern on 4/2/21.
//

#include "Boxes.hpp"
#include <string>
using std::string;

Box::Box(int width, int height):_width(width),_height(height){}

void Box::drawBox(){cout << "this ended up not being used, so you shouldn't see this." << endl;}

// these can be combined
string Box::constructFull(const int length){return string(length,88);}
string Box::constructEmpty(const int length){return string(length,32);}

int Box::getWidth(){return _width;}
int Box::getHeight(){return _height;}

void FilledBox::drawBox(){
    for(int i=0; i<_height;++i){
        cout << constructFull(_width) << endl;
    }
}


void HollowBox::drawBox(){
    cout << constructFull(_width) << endl;
    for(int i=0; i<_height-2;++i){
        cout << "x" << constructEmpty(_width-2) << "x" << endl;
    }
    cout << constructFull(_width) << endl;
}



string CheckeredBox::drawLine(const int length, const int row){
    string line = "";
    auto holder = length;
    
    if(!row%2){line += " "; holder--;}
    
    for(int i=0; i < (length+1)/2; i++){
        line += "x ";
    }
    return line;
}

void CheckeredBox::drawBox(){
    for(int i=0;i<_height;++i){
        cout << drawLine(_width, i) << endl;
    }
}
