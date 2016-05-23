#include <iostream>
#include <cmath>
#include "Vector.h"
int main() {
    Vector a(-2, 7);
    Vector b(3, -8);
    Vector c;


    std::cout << "vector a is: " << a << std::endl;
    std::cout << "vector b is: " << b << std::endl;
    std::cout << "vector c is: " << c << std::endl;

    std::cout << "aVector x = " << a.getX() << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "c != b: " << (c != b) << std::endl;
    
    
    
    std::cout << "a + b = " << (a + b) << std::endl;
    
    a.setX(5);
    a.setY(5);
    std::cout << "New vector a is: " << a << std::endl;
   
    std::cout << "a + b = " << (a + b) << std::endl;
     
     
    std::cout << "len = " << a.len() << std::endl;

    
    return 0;
}
