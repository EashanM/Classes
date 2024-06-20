#include <iostream>

using namespace std;

// References 

// Say we have a function:

void f(int &x) {
    cout << x;
}

// When we write f(int &x) and utilize it (give it an input), the reference variable (x) is given an alias
// The alias is for the location of y in memory (y is the input)

int main(){
    int y = 10;
    f(y);
    cout << endl;

    int a = 0;
    int &b = a; // Makes a reference to the value of a (b is an alias for a)

    // This has the effect of "linking" a and b; changing one will change the other (names for the same thing)

    b = 2;
    cout << a << " " << b << endl; // a AND b are both 2

    a = 3;
    cout << a << " " << b << endl; // a AND b are both 3
    return 0;

}

// References are pointers that are dereferenced every time they are used

// Key Differences btwn references and pointers:

// 1) References are not dereferenced explicitly
// 2) You cannot change the location to which a reference points (you can change the location of a pointer)
// => References must be initalized and declared at the same time
// 3) When you are writing the value you'd like to reference, you don't have to take the & before the variable to locate the address
// Pointers require the ampersand for the location.
