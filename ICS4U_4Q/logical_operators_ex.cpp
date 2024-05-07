
// Recall set up for a standard C++ program

#include <iostream>

using namespace std;

// Recall: Variables require both declaration and initialization

int main() {
    int x = 6;
    int y = 4;
    cout << "x = " << x << ' ' << "y = " << y << "\n";

    // Use if statements for logical and relational operators

    // notation:

    // if condition (is true)
    //   result of condition
    // else
    //   result of non condition

    // If-else block
    if (x > 5)
        cout << "x is greater than 5\n";
    else
        cout << "x is not greater than 5\n";

    cout << "\n";

    // This will test if x > y AND if y > 0
    // Implies that BOTH scenarios must be true for the overall statement to be true
    // && is equal to AND
    if (x>y && y>0)
        cout << "x is greater than y and y > 0\n";
    else 
        cout << "condition is not true\n";

    cout << "\n";

    // This will test if x > y OR if y > 0
    // Implies that ONE or MORE of the statements must be true for the overall statement to be true
    // || is equal to OR
    if (x>y || y<0 || x>0)
        cout << "x is greater than y OR y < 0 OR x > 0\n";
    else 
        cout << "condition is not true\n";

    // New command: else if
    // An extension of the if command
    // Used if you want to add more than one condition to a conditional block

    cout << "\n";

    if (x > y)
        cout << "Yes\n";
    else if (x < y)
        cout << "No\n";
    else
        cout << "Maybe\n";

    cout << "\n";

    // Cannot do this:
    // if something 
    //  cout something;
    // if something else
    //  cout something else;

    // What happens if you want multiple things to happen if a condition is met?
    // Add curly brackets for multiple outputs

    if (x>y){
        int z = x+y;
        cout << z;
    }
    else {
        int w = x-y;
        cout << w;
    }
    return 0;
}