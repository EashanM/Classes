// Example of variable usage in C++

// Always include this
#include <iostream>

// Allows us to shorten code
using namespace std;


// Every program must start with int main()

int main() {
    // Declaration of the variable
    int x;
    // Initialize the variable
    x = 5 + 4;
    // Output the variable
    // cout is like print in Python
    cout << x << ' ' << x/3 << ' ' << x*2;
    // Single Quotation: adds whitespace to output
    
    // Note: you can do both declaration and initialization in one line
    int y = 4 + 2;
    cout << ' ' << y;

    return 0;
}