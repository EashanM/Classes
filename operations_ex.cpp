
// Start program as before

#include <iostream>
#include <math.h>

using namespace std;

// Let's create a program that takes an input and applies a few operations to it

int main() {
    cout << "Please enter a decimal number: \n";
// Declaration
    double n = 0;
// Get the input from the user
    cin >> n;
    cout << "n = " << n;
        cout << "\nn+1 = " << n+1;
        cout << "\nthree times n = " << n*3;
        cout << "\nn cubed = " << n*n*n;
        cout << "\nincrement by 1 = " << ++n;
        cout << "\nsqrt of n = " << sqrt(n);
    return 0;
}