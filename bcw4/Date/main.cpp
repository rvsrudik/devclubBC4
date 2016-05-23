#include <iostream>
#include "Date.h"

int main() {

//Date date;


    try {
        Date date = Date(30, 2, 1581);
        std::cout << date << std::endl;
        } catch (InvalidDate* e) {
            std::cout << e->text << std::endl;
       delete e;    
    }
        

    try {
        Date date = Date(30, 22, 2015);
        std::cout << date << std::endl;
        } catch (InvalidDate* e) {
            std::cout << e->text << std::endl;
       delete e;    
    }
        
            try {
        Date date = Date(30, 2, 1604);
        std::cout << date << std::endl;
        } catch (InvalidDate* e) {
            std::cout << e->text << std::endl;
       delete e;    
    }
        
            try {
        Date date = Date(29, 2, 1600);
        std::cout << date << std::endl;
        } catch (InvalidDate* e) {
            std::cout << e->text << std::endl;
       delete e;    
    }
        
return 0;
}
