#include <iostream>

using namespace std;

// Function declaration must be before the invocation (usage)

// To alleviate this problem: 
// 1st Method: Rearrange Functions such that the declaration comes before the usage
// 2nd Method: Use a function prototype (on next file)

// int func1(){
    
   // return func2()*10 ;
   
// }

int func2(){
    return 3; 
}

int func1(){
    return func2()*3;
}

int main(){
    cout << func1();
    return 0;
}