//
//  Boxes.hpp
//  CS202HW4
//
//  Created by Alden Ahern on 4/2/21.
//

#ifndef Boxes_hpp
#define Boxes_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Box {
public:
    Box(const int width,const int height);
    
    void drawBox();

    string constructFull(const int length);
    string constructEmpty(const int length);
    int getWidth();
    int getHeight();

    const int _width;
    const int _height;
};

class FilledBox : public Box {using Box::Box; void drawBox();};

class HollowBox : public Box {using Box::Box; void drawBox();};

class CheckeredBox : public Box {
    using Box::Box;
    void drawBox();
    string drawLine(const int length,const int row);
};


#endif /* Boxes_hpp */
