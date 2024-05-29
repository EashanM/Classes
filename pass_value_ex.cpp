#include <iostream>

using namespace std;

// Pass by Value and by Reference
// Typically, when we invoke and change a variable, what we actually do is make a copy of the variable which contains the changes;
// Changes to the variable inside of a function don't have any impacts outside of a function (because copy is what changes)
// Called pass-by-value



// example 
void increment(int a){
    a = a+1; // Add one to an input
    cout << "a plus one is " << a << endl;
}

int main(){
    int x = 5;
    increment(x); // This is where a copy of x was made => the copy is set to 6, and x remains set at 5 (did nothing)
    cout << x << endl;
    return 0;
}

// Results from the scope differences: global variable is x - main scope
// Local variable is a (contained within the increment function) - different scope
// When the function is called, the variable a gets set to 6 and the input x is unchanged - difference in scope



