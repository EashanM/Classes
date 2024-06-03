#include <iostream>

using namespace std;

// What if I wanted to use an array as an input to a function?

// Good news: Reasonably straight forward
// Specify the array as a argument WITHOUT a dimension


// Let's create a function that takes the first n elements of an array and returns their sum
int sum_array(int arr[], int sum_length){
    // Start sum of elements at 0
    int sum_arr = 0;
    
    // Run for loop until specified number
    for (int x = 0; x < sum_length; x+=1){
        sum_arr+=arr[x];
    }
    return sum_arr;

}

int main(){
    int arr[] = {1, 5, 2, 5, 7, 8, 1, 3, 9, 4};
    int num_ele = 10;

    // Output array sum and number of elements
    cout << "The sum of the first " << num_ele << " elements is " << sum_array(arr, num_ele) << endl;
    return 0;
}

// HW: Play with this function and see what you can do.
// Bonus (not for marks): See if it's possible to create a fibonacci sequence array using a function

// Note: Arrays are pass-by-reference => any changes to an array in the function scope are reflected in the actual array.