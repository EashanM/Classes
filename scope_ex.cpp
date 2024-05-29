#include <iostream>

using namespace std;

// Scope:
// Where a variable is declared determines where it can be accessed from. 

// Let's test the difference between a global and a local variable:

// Global Variable: numFunc
// Local Variable: result (declared within the functions themselves)

int numFunc = 0;
// int result - would cause problems (don't do this)


int Power(int b, int exp) {
    numFunc += 1;
    int result = 1;
    for (int i = 0; i < exp; i = i+1){
        result = result * b;
}
    return result;

}  

int Min(int x, int y){
    numFunc += 1;
    int result;
    if (x > y){
        result = y;
    }
    else{
        result = x;
    }
    return result;
}

int main(){
   for (int x = 1; x < 6; x+=1){
    cout << Power(x,x+1) << ", " << Min(x,x+1) << endl;
   } 
   cout << endl;
   cout << numFunc << endl;
  // cout << result << endl; result was not initialized globally, only locally - cannot be outputted globally
   return 0;
}