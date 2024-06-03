#include <iostream>

using namespace std;

// Another thing to note: They can be initialized without known values:
// Do not have to set the values for an array to be valid

int main(){
    // Create an array that takes user input
    int arr[7];

    // User prompt
    cout << "Please enter seven integers below" << endl;

    // Loop that asks each array value
    for (int x = 0; x < 7; x+=1){
        cin >> arr[x];
    }

    cout << " " << endl;

    // Output the inputted values
    cout << "Inputted values:" << endl;

    for(int x = 0; x < 7; x+=1){
        cout << " " << arr[x];
        
    }

    cout << endl;

    return 0;
}