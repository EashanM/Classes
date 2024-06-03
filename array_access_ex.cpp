#include <iostream>

using namespace std;

// Similar to lists, we can access individual elements of an array.

// Since arrays are zero-indexed (index starts at 0), the indices go from 0 to n-1, where n is the dimension.
// For example, an array with a dimension of 143 has indices from 0 to 142.

int main(){

    // Create an array with dimension 12
    int arr[] = {153, 315, 64, 36, 364, 634, 3, 46, 386, 7, 234, 2};
    
    // We can access elements from index 0 to index 11
    cout << arr[0] << endl;
    cout << arr[5] << endl;
    cout << arr[11] << endl;

    // This also carries over to for loops: output the array elements to the screen

    return 0;
}