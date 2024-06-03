#include <iostream>

using namespace std;

// New Chapter: Arrays

// (Similar to the idea of a list in Python)
// Before arrays, we stored variables individually in memory
// Arrays allow us to store multiple variables as one unit (array) - similar to a list (Python)

// Arrays have a fixed number of elements of the same type
// For ex: array of all integers, array of all floats, array of all characters, etc.

// Note: Stored sequentially (in an order)
// Note 2: The size of an array is referred to as its dimension

// Syntax:
// In order to create an array, we will use the following syntax:

// type ArrayName[dimension];
// Note: ArrayName is usually specified as arr

// To specify array values:
// Syntax: ArrayName[index] = value
// index goes from 0 to dimension - 1

int main(){
    // Create an array for integers with a dimension of 6:
    int arr[6];

    arr[0] = 1;
    arr[1] = 4;
    arr[2] = 7;
    arr[3] = 10;
    arr[4] = 13;
    arr[5] = 16;

    cout << arr;

}

