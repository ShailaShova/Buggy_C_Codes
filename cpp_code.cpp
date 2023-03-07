#include <iostream>

int main() {
    int *ptr = new int;
    
    // deallocate the memory for the first time
    delete ptr;
    
    // set the pointer to null to prevent double free
    ptr = nullptr;

    // do some operations that might or might not allocate memory

    // deallocate the memory again
    delete ptr;

    return 0;
}
