//
//  main.cpp
//  CS202HW4
//
//  Created by Alden Ahern on 4/2/21.
//

#include <iostream>
#include <string>
#include "Boxes.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << string(3,'x') << string(2,' ') << string(5,'x') << endl;
    
    Box basicBox(3,4);

    Checkered checkeredBox(5,5);

    return 0;
}
