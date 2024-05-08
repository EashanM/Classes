#include <iostream>

using namespace std;

// For loops (cont.)

// We can write a for loop slightly differently if required:
// Initialize and declare the starting point outside of the for keyword
// In effect, we can leave out the initialize from inside the for statement (must still be included)
int main() {
    int x = 5;
    for(; x<10; x=x+2)
    {
        cout << "x is equal to " << x << "\n";
    }
    return 0;

}