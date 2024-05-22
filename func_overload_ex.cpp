#include <iostream>

using namespace std;

// Function Overloading

// Let's say the input to a function isn't fixed (user interaction means that function may take on more than one argument type)
// Use function overloading to accomodate this:
// Create multiple functions with identical names to accomodate different argument types

void OutputSomeInput(int num){
    cout << "The input is (integer) " << num << endl;
}

void OutputSomeInput(char const * num){
    cout << "The input is (string) " << num << endl;
}

// The function that is called matches the argument type


// Function overloading also applies for varying number of arguments 


void OutputSomeNumber(int num){
    cout << "The input is (integer) " << num << endl;
}

void OutputSomeNumber(int num, int num2){
    cout << "The input is (integers) " << num << " and " << num2 << endl;
}

int main(){
    OutputSomeInput(3);
    OutputSomeInput("Hello");
    OutputSomeNumber(3);
    OutputSomeNumber(3,2);
    return 0;
}

// Summarize Function Overloading: C++ can match the input to a function with the corresponding function (as long as it exists)
// HW: Experiment with the type detection (auto keyword)