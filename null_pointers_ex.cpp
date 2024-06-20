#include <iostream>

using namespace std;

// Null, Uninitialized, and Deallocated Pointers

// Up until this point, pointers have been for a defined value
// Sometimes, pointers may not point to valid data. (dereferencing leads to a runtime error)

// For instance, any pointer with a value of 0 (memory location = 0) is invalid => there is no memory location = 0
// Called a null pointer

// Disabling a pointer (set the memory location to 0) because it is not valid

int *myFunc(){
    int x = 4;
    return &x; 
}

int main(){
    cout << myFunc(); // This pointer should be invalid since the variable is deallocated once the function is done
    return 0;
}



