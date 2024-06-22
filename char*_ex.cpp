#include <iostream>

using namespace std;

// Char * string

// char * => array of characters 
// Sets a pointer to the first character in the array.

// Recall: We cannot modify string literals


int main(){
    char name[] = {'B', 'o', 'b'}; // Typically specify a string
    char *name2 = "Bob"; // Cannot modify this

    for(int i = 0; i < 3; i++){
        cout << name[i];
    }
    cout << endl;
    cout << name2 << endl;

    name[0] = 'R';

    cout << endl;
        for(int i = 0; i < 3; i++){
        cout << name[i];
    }
    cout << endl;




}