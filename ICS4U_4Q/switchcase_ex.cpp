#include <iostream>

using namespace std;

// Switch-case 

// Conditional structure that relies on the evaluation of an expression
int main() {
    int x = 3;
    int y = 3;
    int z = 2;
// Switch notation: switch(expression to be evaluated) {
    // case (constant value):
    // This constant value will be checked against the value of the expression
// }

// If you leave the case output blank, C++ will take the next available output
// Remember to break to prevent an output of everything
    switch(x+y-z) {
        case 1: 
                cout << "The value is 1\n";
                break;
        case 2: 
        case 3:
                cout << "The value is 2 or 3\n";
                break;
        case 4:
        case 5:
                cout << "The value is 4 or 5\n";
                break;
        default:
                cout << "The value is -infinity to 0 or 6 to infinity";
                break;
    }
    return 0;
}