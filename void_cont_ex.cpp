#include <iostream>

using namespace std;

// Void Type (cont)

// Note: They are returned as soon as the return line is called (return lines do not necessarily need to be at the end of a function)

// We can customize our code to stop at certain points; simplify our code to include distinct outcomes

void even_number(int num){
    if (num % 2 == 0) {
        cout << "The number " << num << " is even" << endl;
        return;
    }
    cout << "The number " << num << " is odd" << endl;
}

int main(){
    int x = 3;
    even_number(x);
    int y = 6;
    even_number(y);
    return 0;
}  