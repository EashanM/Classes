#include <iostream>

using namespace std;

// How to change original variable?
// Pass by Reference: 
// Input the variable in the function argument as &a instead of just a

// example 
void increment(int &a){
    a = a+1; // Add one to an input
    cout << "a plus one is " << a << endl;
}

int main(){
    int x = 5;
    increment(x); // Now, this increments x (x=6)
    cout << x << endl;
    return 0;
}

// Puts the a variable into main scope