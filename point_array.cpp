#include <iostream>

using namespace std;

// Pointers and Arrays

// Note: The name of an array is the pointer to the first value in the array.
// Ex: my_array[2] to access the third value
// The [2] indicates that the value desired is 2 places away from the first value

// Arrays are always passed by reference (arrays are always defined with pointers)
// Another interesting point: this is why the start for an array is at the index 0: Index 0 tells the compiler to go 0 spaces away from the first value 

// long keyword is to store variables in a 64-bit format

int main(){
    long arr[] = {1, 5, 10, 20};
    long *ptr = arr; // Sets the ptr to the location of arr
    cout << *ptr << endl; // Outputs 1
    ptr++; // The values of an array are incremented by 1 away from each other
    cout << *ptr << endl; // Outputs 5

    long *ptr2 = arr + 3;
    cout << *ptr2 << endl;

    // Interesting idea here: 

    // You can subtract two pointers to get the number of array values between them.

    cout << ptr2 - ptr << endl;
    return 0;
}

