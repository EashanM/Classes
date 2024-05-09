#include <iostream>

using namespace std;

// Functions

// Higher readability - Do not have to copy paste the same block of code over and over again
// Higher maintainability - to change output, you only need to modify the function
// Reuse of code

// Start with this example: find the exponent of 5 to the power of 4
// 5^4 = 5*5*5*5
// Solve this using a for loop

int main() {
    int Five_exp_Four = 1;
    for (int i = 0; i < 4; i = i+1){
        Five_exp_Four = Five_exp_Four*5;
    }
    cout << "Five to the power of four is equal to " << Five_exp_Four << "\n";

// Let's say I wanted to do this for other numbers:
// Ex: 3^8

    int Three_exp_Eight = 1;
    for (int i = 0; i < 8; i = i+1){
        Three_exp_Eight = Three_exp_Eight*3;
    }
    cout << "Three to the power of eight is equal to " << Three_exp_Eight << "\n";

    return 0;
}