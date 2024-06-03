#include <iostream>

using namespace std;

// Arrays (cont.)

// Alternative method(s) of initalizing an array:

int main(){
    // Same as before, but set ArrayName[dimension] = {elements separated by commas};
    int arr[5] = {1,2,3,4,5};

    for(int x = 0; x < 5; x+=1){
        cout << arr[x] << ", ";
        
    }

    cout << endl;

    // Another method:
    // Let C++ determine the dimension and set the array as above
    // The compiler is smart enough to determine the dimension based on the input

    int arr2[] = {1,2,3,4,5};

     for(int x = 0; x < 5; x+=1){
        cout << arr2[x] << ", ";
    }

    cout << endl;

    return 0;

}