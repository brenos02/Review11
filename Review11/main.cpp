//
//  main.cpp
//  Review11
//
//  Created by Breno Sallouti on 09/06/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//Get radius from user and output the area of a circle and volume of a sphere of that radius

#include <iostream>

int main(int argc, const char * argv[]) {
    float a;
    std::cout<< "Please input radius:";
    std::cin>> a;
    std::cout<< "A circle with that radius would have a area of:" << a*a*3.141516;
    std::cout<<"A sphere with that radius would have a volume of:"<<  4.19 * (a * a * a);
    return 0;
}
