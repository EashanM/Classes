#include <iostream>

using namespace std;

// Recursion
// Recall: When a function calls itself at a previous value
// Example: Fibonacci Sequence :: 1, 1, 2, 3, 5, 8, 13, 21, ....
// The next term is the sum of the two previous:
// x_{n-2} + x_{n-1} = x_{n}
// fib(n-2) + fib(n-1) = fib(n) - function

// Let's create a function to simulate the fibonacci sequence until term n starting from 0 (integer input from the user)
// Recall: fibo(0) = 1
// Recall: fibo(1) = 1

int fibo(int n){
    if (n == 0 || n == 1){
        return 1; // This sets up the end point for the recursion
    }
    else {
        return fibo(n-2) + fibo(n-1);
    }

}

// Let's try out fibo function

int main(){

    int n_fib = 0;

    cout << "How many sequence terms of the fibonacci sequence would you like?" << endl;
    cin >> n_fib;
    cout << endl;

    for (int x = 0; x < n_fib; x += 1 ){
        cout << fibo(x) << endl;
    }
    return 0;
}