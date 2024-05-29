#include <iostream>

using namespace std;

// Let's use the pass by reference to swap variables:

// Use the & symbol on the function arguments 

void swap(int &x, int &y) {
    int z = x;
    x = y;
    y = z; // = x => effectively setting y=x
}

int main(){
    int a = 10;
    int b = 7;
    swap(a,b); // This will swap the value of a and b due to pass by reference (if you remove the & symbol this will not work)
    cout << "a = "<< a << endl << "b = " << b << endl;
    return 0;
}

// With the & symbols, the inputs for the swap function are at the same scope level (x and y are altered)
