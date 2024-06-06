#include <iostream>

using namespace std;

// Arrays
// 1D & 2D Arrays
// Arrays in Functions

// 2D Arrays Cont.
// Another way to create 2D arrays

int main(){
    // Define a 2D array similar to 1D array (array of arrays)
    int arr_2D[3][2] = {{1,2}, {3,4}, {5,6}};
    // Note: Dimension must always be provided for 2D array

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
         cout << " " << arr_2D[i][j];
        }
    }

    cout << endl;
    return 0;

// Note: For multidimensional arrays passed into functions, you must specify all dimensions except the first;
// For ex: void myfunction(int arr[][3][4]) {...} => do not need to specify the first dimension

}