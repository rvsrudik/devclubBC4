#include <iostream>
#include "Complex.h"
int main() {
    Complex x(-0, +1);
    Complex y(0, 1);
    Complex z;


    std::cout << "x is: " << x << std::endl;
    std::cout << "y is: " << y << std::endl;
    std::cout << "z is: " << z << std::endl;

    std::cout << "xReal = " << x.getReal() << std::endl;
    std::cout << "x == y: " << (x == y) << std::endl;
    std::cout << "z != y: " << (z != y) << std::endl;
    
    std::cout << "x + y = " << (x + y) << std::endl;
    std::cout << "y * z = " << (y * z) << std::endl;
    
    x -= y;
    
    x = y * z;
    
    std::cout << "xReal = " << x.getReal() << std::endl;
    std::cout << "xIm = " << x.getImaginary() << std::endl;
    
    std::cout << "x is: " << x << std::endl;
    
    std::cout << (0 * -7) << std::endl;
    
    return 0;
}
