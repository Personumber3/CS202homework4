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

void Box::drawBox(){}

string constructFull(const int length){return string(length,'x');}

string drawEmpty(const int length){return string(length,' ');}

void Full::drawBox(){
    for(int i=0; i<_height;++i){
        cout << constructFull(_width) << endl;
    }
}


void Hollow::drawBox(){
    cout << constructFull(_width) << endl;
    for(int i=0; i<_height-2;++i){
        cout << "x" << constructEmpty(_width-2) << "x" << endl;
    }
    cout << constructFull(_width) << endl;
}



string Checkered::drawLine(const int length, const int row){
    string line = "";
    auto holder = length;
    
    if(!row%2){line += " "; holder--;}
    
    for(int i=0; i < (length+1)/2; i++){
        line += "x ";
    }
    return line;
}

void Checkered::drawBox(){
    for(int i=0;i<_height;++i){
        cout << drawLine(_width, i) << endl;
    }
}
