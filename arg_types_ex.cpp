#include <iostream>

using namespace std;

// Argument Types must match
// Recall: Argument types are specified in the function signature

void my_func(int num){
    cout << num << endl;
}

void my_func2(char const * word){
    cout << word << endl;
}

// Need to input the correct type into function invocation
// Cannot input a string into my_func (must take only int)
// Likewise for my_func2

int main(){
    my_func(3);
   // my_func("Hello"); does not work
    my_func2("Hello");
    // my_func2(3); does not work
    return 0;
}