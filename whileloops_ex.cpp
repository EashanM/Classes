#include <iostream>

using namespace std;

// While loops

int main() {
// While loop:
// Checks the validity of a condition
// Does something if the condition is true

    int x = 5;
    while (x < 10)
        x = x + 1;

    cout << "x = " << x << "\n";

    int y = 4;

    // Multiple actions to repeat under a loop
    // Use curly brackets around each relevant statement
    // Similar to python (need to use curly brackets)
    while (y<12)
    {
        y = y+1;
        cout << y << "\n";
    }
    return 0;
}