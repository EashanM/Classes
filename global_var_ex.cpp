#include <iostream>

using namespace std;

// Global Variables
// Recall (Python):
// Difference between Global and Local Variables:
// Global: Apply to all parts of the code
// Local: Specific to a code block (function)

// Essentially, global variables are initialized outside of a function 

int num = 0;

// Use this idea of global variables - count the number of repetitions of a function

int numFunc = 0;

void my_func(){
    ++numFunc; // ++ syntax - increments the variable to the right by one.
}

int main(){
    my_func();
    my_func();
    my_func();
    my_func();
    my_func();
    cout << numFunc << endl; // Output the global variable. What output do we expect?
    return 0;
}

// Note: in order to call function, must use brackets even if there is no input


