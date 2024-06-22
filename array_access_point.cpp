#include <iostream>

using namespace std;

// Array Access Notations

// Typically, when we access elements in an array: arr[n] gives us the value of arr at index n:

// Using the idea of pointers, we can also do this using *(arr + n)

int main(){
    long arr[] = {1, 5, 4, 3, 6, 7, 3, 8, 9, 2};

    cout << arr[0] << endl; // This is equivalent to the line just below => Pointer-Subscript Notation
    cout << *(arr+0) << endl; // => Pointer-Offset Notation

    cout << arr[6] << endl; // This is equivalent to the line just below
    cout << *(arr+6) << endl; // => Pointer-Offset Notation

    return 0;
}

