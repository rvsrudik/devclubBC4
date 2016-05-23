#include <cstdlib>
#include "List.h"


List::List(int capacity, double multiplier) : capacity(capacity), current(0), multiplier(multiplier) {
       array = (int*)malloc(capacity*sizeof(int));
// useless line
       // second useless line
       if ( array == NULL ) {
           throw OutOfMemoryException();
       }
}

List::~List() {
   free(array);
}

int List::size() const {
    return this->current;
}
   
int List::max_size() const {
    return this->capacity;
}


void List::push_back(int value) {
   int newCurrent = current + 1;

   if ( newCurrent > capacity ) {
       int newCapacity = capacity * multiplier;
       int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

       if ( newArray == NULL ) {
           throw OutOfMemoryException();
       }

       capacity = newCapacity;
       array = newArray;
   }
   array[current] = value;
   current = newCurrent;
}



int List::pop_back() {
   if ( current == 0 ) {
       throw ZeroLenException();
   }
   current -= 1;
   return array[current];
}



std::ostream& operator<<(std::ostream& out, const List& list) {
   int last = list.size() - 1;

   for ( int i = 0; i < last; i++ ) {
       out << list[i] << ' ';
   }
   out << list[last];
   return out;
}
