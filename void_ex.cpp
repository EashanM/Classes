#include <iostream>

using namespace std;

// Let's say I wanted C++ to return no value (output whatever as cout statements)
// Give the function a type of "void"

void my_function(int num){
    cout << "Hello class, welcome to day " << num << endl;
}
// The void type allows us to return no value (gives more flexibility if a function doesn't need to take on a value)
// Mathematically, solving a function means giving a value to f(x)
// In computer science, functions don't necessarily have to take on values
// endl : end line ("\n")

int main(){
    for (int x=1; x<15; x=x+1) {
        my_function(x);
    }
    return 0;

}

// Note: You cannot declare a variable with type "void"
// void x - this does not mean anything