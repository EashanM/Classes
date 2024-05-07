// Remember the first 3 elements (include, using, and int main())
#include <iostream>

using namespace std;

int main() {
// Let's get the user's input on a variable: let's get an integer input as x.
// Start by declaring the variable 
    int x;
// This time, we do not have to initialize it
    cin >> x;
// Output x with some operations   
    cout << x << ' ' << x / 4.0 << ' ' << x*10;
    return 0;
}