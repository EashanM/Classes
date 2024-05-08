#include <iostream>

using namespace std;

// Recall from Python: Created nested if-else statements and nested loops

// Nested if-else statement:

int main() {
    int a = 1;
    int b = 3;
    if (b > a){
        cout << "b is bigger than a\n";
        if (b > 3)
            cout << "b is bigger than 3\n";
        else if (b < 3) 
            cout << "b is less than 3\n";
        else 
            cout << "b is equal to 3\n";
    }
    else
        cout << "b is less than or equal to a\n";

// Recall: Matrix is a nested loop (2-D array)
    for(int x = 1; x<=3; x=x+1) {
        for(int y = 1; y<=3; y=y+1)
            cout << y << ' ';
        cout << "\n";

    }

// Homework; output a matrix of 
// 1 2 3
// 4 5 6 
// 7 8 9

    
}
