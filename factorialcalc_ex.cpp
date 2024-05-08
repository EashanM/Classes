#include <iostream>

using namespace std;

// For loops

// Similar to while loop, but has different notation
// Python: 
// for i in range(5):

// C++: 
// for(initialize; condition; increment)
// {
    // statements to be executed
// }

// Recall: n! = n*(n-1)*(n-2)...*1
// 3! = 3*2*1

// Create a rudimentary factorial calculator:

int main() {
    int q = 1;
    cout << "Input an integer below to find the factorial:\n";
    cin >> q;

    int p = 1;
    for(int x = 1; x < q+1; x = x + 1)
    {
        p = p*x;
        //cout << "The current value of the factorial is " << p << "\n";
    }
    cout << "The factorial of " << q << " is " << p << "\n";
    return 0;

}

// This for loop can be written as a while loop
// Homework: rewrite this code as a while loop