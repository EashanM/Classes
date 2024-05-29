#include <iostream>

using namespace std;

// Function declaration must be before the invocation (usage)

// To alleviate this problem: 
// 1st Method: Rearrange Functions such that the declaration comes before the usage
// 2nd Method: Use a function prototype (on next file)

// Function protoype: declarating a function without specifiying details:

int func2(); // Declaring func2 before it occurs; allows C++ to recognize that it exists and gives it a type of int

// Note: The arguments and function body don't matter

int func1(){
    return func2()*3;
}

int func2(){
    return 3; 
}

int main(){
    cout << func1();
    return 0;
}

// Side note: Function prototypes are usually added to separate header files (separates the specification of the function from the implementation)