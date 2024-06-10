#include <iostream>

using namespace std;

// Const Pointers

// const keyword: specifies that a variable's value is constant 

// Two ways of using this
// 1) Set the value of the variable to be constant
// 2) Set the value of the memory address (pointer) to be constant 

int main(){
    // Declares a changeble pointer to a constant integer (this pointer cannot change the associated integer,
    // but the pointer can point to another integer.
    int x = 10;
    const int *ptr = &x;
    // *ptr = 20; Error: read-only variable is not assignable
    cout << *ptr << ' ' << x << endl;
    
    // Declares a constant pointer to a changeable integer (the point can change the associated integer,
    // but cannot point to a different constant)
    int y = 15;
    int * const ptr2 = &y;
    *ptr2 = 16;
    cout << *ptr2 << ' ' << y << endl;

    // Declare a constant pointer to a constant integer (cannot change the address or the value of z through the pointer)
    int z = 20;
    const int * const ptr3 = &z;
    cout << *ptr3 << ' ' << z << endl;
    return 0;
    
}