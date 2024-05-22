#include <iostream>

using namespace std;

// Returning Function Values:

// The functions in C++ can only return what type you give them.
 
// The following code will throw an error: (tried to initalize and int value for my_func(), but asked it to return a string ("Hello"))
// int my_func()
// {
   // return "Hello";
// }

// Recall: char is a single text character
// Use char* to represent a string
char const * myfunction(){
    cout << "Hello";
    return "Finished";
}

int main(){
    myfunction();
    return 0;
}

// For the purposes of this class, a function will be initialized with integer value (int), return 0 or some other numerical output. 
// Note: A function can only output one thing
