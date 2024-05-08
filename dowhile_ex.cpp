#include <iostream>

using namespace std;

// Do-while loops

// Similar to a while loop, but will do multiple statements as long as some condition is met
// Guarantees that the block of desirable statements is outputted at least once.
// Block of statements in the "do" brackets is executed and THEN the condition is checked.
// Different to a traditional while loop (checks condition then outputs statements)
int main() {
    int z=1;

    do
    {
        z = z+1;
        cout << "The current value of z is " << z << "\n";
    }
    while (z<10);
    return 0;
}