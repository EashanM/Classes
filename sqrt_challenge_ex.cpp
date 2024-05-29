#include <iostream>

using namespace std;

// Challenge: Create a function to estimate the square root of a number 
// Create a function that takes some n input (float) and tries to estimate the square root without using any exponents 
// Cannot just take sqrt(n) or n^(1/2)
// I want you to estimate based on the idea of what a square root is.
// Hint: sqrt(2) * sqrt(2) = 2
// Assume num >= 1

// Solution:
// Lower bound for the root = 1 
// Upper bound for the root = num


double my_sqrt(double num){
    double lower = 1;
    double upper =  num;
    // double estimate; this will enable a return line with estimate 
    
    // Use these bounds to guess the root
    // Create a for loop to guess and check an answer
    // How can we guess an answer?
    // An easy guess would be an average of the upper and lower bound
    // Let's create a for loop which tests the average of the upper and lower bound and then changes the upper and lower bound 
    // such that the range becomes smaller. 

    // Example:
    // Let's say I put in the number 16 into the function.
    // First step: Calculate the avg. of lower and upper  = (1+16)/2 = 8.5
    // 8.5 * 8.5 = 72.25 => way too big (root is much smaller than 8.5 => set the upper bound to 8.5)
    // Now, lets set the upper bound to 8.5
    // Compute the average again: (1+8.5)/2 = 4.75
    // This is a lot closer now 

    // Check: 4.75 * 4.75 = 22.5625 still too big, but much closer. Set the upper bound to 4.75
    // Repeat the avg given upper = 4.75 => avg = 2.875

    // Check once again: 2.875*2.875 = 8.266 < 16 (2.875 is too small => change the lower bound)
    // Compute the new avg. (2.875+4.75)/2 = 3.8125 => a lot closer

    // This method of estimating the root is a foundational concept in mathematical optimization 
    // Convert this into code
    for (int x = 0; x < 30; x +=1){ // last value of x is 29
        double estimate = (lower + upper)/2;
        if (estimate * estimate > num) {
            upper = estimate;
            }
        else {
            lower = estimate;
            }
        }
        // if (x == 29){
           // return estimate; this will work
        // }

    return (lower + upper)/2;
    // return estimate; will not work (undefined in the context of the function)
}

int main(){
    cout << my_sqrt(16) << endl << my_sqrt(6561) << endl;
    return 0;
}

// Recall: Scope
// Note: Loops and If/Else statements have their own scope (even more localized variable)
// A somewhat relevant method of determining variable scope; consider the indent of the variable (not always true)

// Ways to get around this:
// 1: Modify your code (move it around s.t. the variable is accessed "in scope")
// 2: Declare the variable earlier in the code 