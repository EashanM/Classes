#include <iostream>

using namespace std;

// Function Syntax


int Power(int b, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i = i+1){
        result = result * b;
}
    return result;
}

// int b and int exp - Arguments
// int Power(int b, int exp) - Signature 
// int Power - Function Declaration
// Recall: int - integer

// Body of a function:

// {
//    int result = 1;
//  for (int i = 0; i < exp; i = i+1){
//     result = result * b;
// }
//  return result; - Return statement
//}


int main() {
    cout << Power(2,4) << "\n" << Power(4,3) << "\n" << Power(3,7);
    // Using the function (Power(2,3) is referred to as Function Invocation)
    return 0;
}


