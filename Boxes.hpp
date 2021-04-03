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
    
    virtual void print(ostream &os) {};
    virtual string type() const;

    string constructFull(const int length);
    string constructEmpty(const int length);
    
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
    FilledBox();
/*
    void print(ostream &os) override {
        for(int i=0; i<_height;++i){
            os << constructFull(_width) << "\n";
        }
    }
 */
    string type() const override {return "Filled Box";};
;
};

class HollowBox : public Box {
    using Box::Box;
public:
    HollowBox();
/*
    void print(ostream &os) override {
        os << constructFull(_width) << "\n";
        for(int i=0; i<_height-2;++i){
            os << "x" << constructEmpty(_width-2) << "x" << "\n";
        }
        os << constructFull(_width) << "\n";
    };
    string type() const override {return "Hollow Box";};
 */
};

class CheckeredBox : public Box {
    using Box::Box;
public:
    CheckeredBox();
    
    string drawLine(const int length,const int row);
    string type() const override {return "Checkered Box";};
    /*
    void print(ostream &os) override {
        for(int i=0;i<_height;i++){
            os << drawLine(_width, i) << "\n";
        }
    };
     */
};

ostream operator<<(const ostream &os,const Box &b);

#endif /* Boxes_hpp */
