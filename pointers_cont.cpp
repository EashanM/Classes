#include <iostream>

using namespace std;

// Pointers

// Pointers (Memory Addresses) allows us to manipulate variables and data more effectively 
// => access the location of the variable and modify the memory address rather than the value itself

// Enables:
// More flexibility in pass-by-reference
// Manipulate complex data structures more effectively
// Use polymorphism (advanced coding theory)

// In simplistic terms, pointers are really just variables that store integers where the integers are memory addresses (generally this is of some other variable)
// In notational terms, a pointer that stores the address of some other variable is said to point to that variable.
// I.e, a pointer that stores the address of num "points" to num. 

// For example, if the address of x is 45101, then the pointer value will be 45101. 

int main(){
    // Notation for pointers:
    // type *pointer = &x 
    // *pointer is the declaration of a pointer
    // &x is the location
    // Setting the value of pointer to be the address of x
    int x = 20;
    int *ptr = &x; // Address of x for my session of C++: 0x7ff7b50c234c
    cout << ptr << endl;

    // Note: ptr takes on the type of "type *", where type is the type of the input

    // If we want to access the value at a specific address, we can use the * to do so.
    cout << *ptr << endl;

    // We can also use this *ptr to set x
    *ptr = 19;

    cout << "x is now " << x << endl;
    return 0;
}

