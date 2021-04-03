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
    
    FilledBox filledBox(3,4);
    
    HollowBox hollowBox(10,5);
    
    CheckeredBox checkeredBox(4,4);

    return 0;
}
