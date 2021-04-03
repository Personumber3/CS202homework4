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

    const int _width;
    const int _height;
};

class Full : public Box {using Box::Box; void drawBox();};

class Hollow : public Box {using Box::Box; void drawBox();};

class Checkered : public Box {
    using Box::Box;
    void drawBox();
    string drawLine(const int length,const int row);
};





class Base {
public:
  virtual void fooVirtual() const { cout << "Base class virtual function\n"; }
  void fooNotVirtual() const { cout << "Base class non-virtual function\n"; }
};

class Derived : public Base {
public:
  void fooVirtual() const override { cout << "Derived class virtual function\n"; }
  void fooNotVirtual() const { cout << "Derived class non-virtual function\n"; }
};


#endif /* Boxes_hpp */
