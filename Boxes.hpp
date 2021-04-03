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
#include <string>
using namespace std;

class Box {
public:
    Box(const int width,const int height);
    
    virtual void drawBox() {cout << "this ended up not being used, so you shouldn't see this." << endl;};

    string constructFullBox(const int length);
    string constructEmptyBox(const int length);
    int getBoxWidth();
    int getBoxHeight();

    const int _width;
    const int _height;
};

class FilledBox : public Box {
    using Box::Box;
    void drawBox() override {
        for(int i=0; i<_height;++i){
            cout << constructFullBox(_width) << endl;
        }
    }
;
};

class HollowBox : public Box {
    using Box::Box;
    void drawBox() override {
        cout << constructFullBox(_width) << endl;
        for(int i=0; i<_height-2;++i){
            cout << "x" << constructEmptyBox(_width-2) << "x" << endl;
        }
        cout << constructFullBox(_width) << endl;
    }
;
};

class CheckeredBox : public Box {
    using Box::Box;
    void drawBox() override {
        for(int i=0;i<_height;++i){
            cout << drawBoxLine(_width, i) << endl;
        }
    };
    string drawBoxLine(const int length,const int row);
};


#endif /* Boxes_hpp */
