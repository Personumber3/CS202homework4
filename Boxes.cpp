//
//  Boxes.cpp
//  CS202HW4
//
//  Created by Alden Ahern on 4/2/21.
//

#include "Boxes.hpp"
#include <string>
using std::string;


void Box::drawBox(){}

string constructFull(const int length){
    string line("x",8);
    for(int i=0; i < length; i++){
        line += "x";
    }
    return line;
}
void drawEmpty(const int length);

void Full::drawLine(){
    string line = "";
    for(int i=0; i < _width; i++){
        line += "x";
    }
    cout << line << endl;
}


void Hollow::drawLine(){
    string line = "";
    for(int i=0; i < _width; i++){
        if(i == 0 or i == _width-1){line += "x";}
        else{line += " ";}
    }
    cout << line << endl;
}
void Hollow::drawEdge(){
    string line = "";
    for(int i=0; i < _width; i++){
        line += "x";
    }
    cout << line << endl;
}


void Checkered::drawLine(){
    string line = "";
    for(int i=0; i < _width/2; i++){
        line += "x ";
    }
    cout << line << endl;
}

