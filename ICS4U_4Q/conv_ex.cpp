
// Convert between some types of data

#include <iostream>

using namespace std;

// For character to integer, C++ will use ASCII table

int main() {
    char t = 'a';
    int l1 = t;
    int l2 = t+10;
    double f1 = l2+4.5;
    cout << l1 << "\nt+10 = " << l2 << "\nt+14.5 = " << f1;

    int n1 = 120;
    char n2 = n1;
    cout << "\n" << n2 << "\n" << n1;

    return 0;
}