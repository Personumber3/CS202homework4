//
//  main.cpp
//  CS202HW4
//
//  Created by Alden Ahern on 4/2/21.
//

#include <iostream>
#include <string>
#include "Boxes.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
        
    FilledBox filledBox(3,4);
    
    HollowBox hollowBox(10,5);
    
    CheckeredBox checkeredBox(4,4);

    cout << filledBox << endl;
    cout << hollowBox << endl;
    cout << checkeredBox;
    
    filledBox.setHeight(5);
    
    return 0;
}
