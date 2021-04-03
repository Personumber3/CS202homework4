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
    Box();
    
    virtual void drawBox() {cout << "this ended up not being used, so you shouldn't see this." << endl;};
    virtual void print(ostream &os) const {};
    virtual string type() const {return "normal Box";};

    string constructFullBox(const int length);
    string constructEmptyBox(const int length);
    int getWidth();
    int getHeight();
    void setWidth(int const &width);
    void setHeight(int const &height);

    int _width;
    int _height;
};

class FilledBox : public Box {
    using Box::Box;
public:
    void drawBox() override {
        for(int i=0; i<_height;++i){
            cout << constructFullBox(_width) << endl;
        }
    }
    string type() const override {return "Filled Box";};
;
};

class HollowBox : public Box {
    using Box::Box;
public:
    void drawBox() override {
        cout << constructFullBox(_width) << endl;
        for(int i=0; i<_height-2;++i){
            cout << "x" << constructEmptyBox(_width-2) << "x" << endl;
        }
        cout << constructFullBox(_width) << endl;
    };
    string type() const override {return "Hollow Box";};
};

class CheckeredBox : public Box {
    using Box::Box;
public:
    void drawBox() override {
        for(int i=0;i<_height;i++){
            cout << drawBoxLine(_width, i) << endl;
        }
    };
    string drawBoxLine(const int length,const int row);
    string type() const override {return "Checkered Box";};
};

ostream operator<<(const ostream &os,const Box &b);

#endif /* Boxes_hpp */
