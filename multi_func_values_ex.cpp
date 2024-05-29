#include <iostream>

using namespace std;

// Returning Multiple Values

// Recall: When we started functions, I mentioned that the return line can only output one variable
// Using pass by reference, we can output more than one variable 

// Ex:(function that divides two numbers)


int divide(int numerator, int denominator, int &remainder){ // Add the & symbol to remainder to pass by reference (allow us to refer to it later)
    remainder = numerator % denominator; // Computing the remainder variable
    return numerator / denominator;
}

// Defintion of division:

// quotient*denominator + remainder = numerator

int main(){
    int x = 105;
    int y = 24;
    int rem; // This allows us to set rem = remainder because it was passed by reference
    int quotient = divide(x,y,rem);
    cout << quotient << " * " << y << " + " << rem << " = " << x << endl;

}