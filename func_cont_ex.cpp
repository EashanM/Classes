#include <iostream>

using namespace std;

// Functions (cont.)

// This is extremely tedious and frankly waste of time.

// To alleviate, let's create a function:

// Declaring a Function: Syntax:

// int function_name(inputs) {
//   Statements to be calculated
//  Utilize the "return" keyword to return the result 
// }

// Note: Define the function, then utilize inside of the main function.

int Power(int b, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i = i+1){
        result = result * b;
}
    return result;
}

int main() {
    cout << Power(2,3) << "\n" << Power(5,4) << "\n" << Power(3,8);
    return 0;
}


