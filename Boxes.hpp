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
    virtual ~Box(){/*cout << "basic destructor" << endl;*/}
    
    virtual const void print(ostream &os) const = 0;
    virtual string type() const = 0;

    string constructFull(const int length) const;
    string constructEmpty(const int length) const;
    
    const int getWidth() const;
    const int getHeight() const;
    void setWidth(int const &width);
    void setHeight(int const &height);


    int _width;
    int _height;
};

class FilledBox : public Box {
    using Box::Box;
public:
    FilledBox();
    ~FilledBox(){/*cout << "Filled destructor" << endl;*/}

    const void print(ostream &os) const override {
        for(int i=0; i<_height;++i){
            os << constructFull(_width) << "\n";
        }
    }
 
    string type() const override {return "Filled Box";};
;
};

class HollowBox : public Box {
    using Box::Box;
public:
    HollowBox();
    ~HollowBox(){/*cout << "Hollow destructor" << endl;*/}

    const void print(ostream &os) const override {
        os << constructFull(_width) << "\n";
        if(_height > 1){
            for(int i=0; i<_height-2;++i){
                os << "x" << constructEmpty(_width-2) << "x" << "\n";
            }
            os << constructFull(_width) << "\n";
        }
    };
    string type() const override {return "Hollow Box";};
 
};

class CheckeredBox : public Box {
    using Box::Box;
public:
    CheckeredBox();
    ~CheckeredBox(){/*cout << "checkered destructor" << endl;*/}
    
    string drawLine(const int length,const int row) const;
    string type() const override {return "Checkered Box";};

    const void print(ostream &os) const override {
        for(int i=0;i<_height;i++){
            os << drawLine(_width, i) << "\n";
        }
    };

};

ostream &operator<<(ostream &os,const Box &b);
ostream &operator<<(ostream &os,Box &b);
ostream &operator<<(ostream &os,Box const &b);

unique_ptr<Box> boxFactory(char c, int w, int h);

#endif /* Boxes_hpp */
