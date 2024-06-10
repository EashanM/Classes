#include <iostream>

using namespace std;

// Variables & Memory

// When a variable is declared, the variable with the associated name is stored in memory (in a specific location)
// When a variable is referenced:
// 1) Look up the variable in memory (address)
// 2) Go to that address and retrieve the associated value 

// Note: You can conduct these steps individually using specific operators (& and the *)
// Ampersand Operator: &x => evaluates to the address of x in memory; pass-by-reference rather than value
// Asterisk Operator: *x => refer to values in memory (modify them) --> declaring a pointer

// In particular, *(&x) => takes the address of x and dereferences it (retrieves the value of x in memory) - pass-by-value
// *(&x) is the same operation as just saying x

// Simplification of Above:
// & gives the location
// * gives the value at that location

int main(){
    // y is a pointer; points to the address of x
    int x = 15;
    int *y = &x;
    cout << y << endl;
    cout << (&x) << endl;
    cout << *(&x) << endl;
    return 0;
}



