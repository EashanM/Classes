#include <iostream>

using namespace std;

// Pointers as a input to functions

// Utilize pointers in functions:
// By setting some argument name x to *x

// Allows us to create a very similar function to pass-by-reference
// We are going to actually modify x rather than make a copy

void my_func(int *x) {
    // Every *x takes the value at the location given (&x)
    (*x) = (*x) * (*x);
}

int main(){
    int x = 10;
    // Pass in the location of x using &x
    my_func(&x);
    // The value of x has changed; not copied!!
    cout << x << endl;
    
}