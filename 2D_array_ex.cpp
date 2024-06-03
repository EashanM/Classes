#include <iostream>

using namespace std;

// Two-Dimensional Arrays
// Can create multi-dimensional arrays

// Similar to Matrices in Python (Lists within a List)

// Syntax:
// type ArrayName[dimension1][dimension2];

// List of lists in Python == Array of arrays in C++
// The first dimension specifies some subarray in ArrayName
// The second dimension specifies the value in the subarray

// For specifiying values, you must go through all elements in all dimensions

// Array[x][y]
// => Array[0][0], Array[0][1], Array[0][2], ... Array[0][y-1]
// => Array[1][0], Array[1][1], Array[1][2], ... Array[1][y-1]
// ... 
// => Array[x-1][0], Array[x-1][1], Array[x-1][2], ... Array[x-1][y-1]

int main(){
    // Create 2D Array

    int arr_2D[2][4];

    // Specify Values

    arr_2D[0][0] = 1;
    arr_2D[0][1] = 2;
    arr_2D[0][2] = 3;
    arr_2D[0][3] = 4;
    arr_2D[1][0] = 5;
    arr_2D[1][1] = 6;
    arr_2D[1][2] = 7;
    arr_2D[1][3] = 8; 

    // Output values:
    // Create a double for loop
    // Note variable++: this means iterate by 1.
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << " " << arr_2D[i][j];
        }
    }

    cout << endl;

    return 0;
 
}


