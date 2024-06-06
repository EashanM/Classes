#include <iostream>
#include <cctype>

using namespace std;

// How to manipulate/change the characters of a string:

// Use some external libraries:

// cctype (ctype.h) character handling
// cstdio (cstdio.h) input/output operations
// cstdlib (stdlib.h) general utilities
// cstring (string.h) string manipulation

// Let's try an example with cctype:

int main(){
    char given[] = "t6H0I9s6.iS.999a9.STRING";
    // Want to remove everything but the alphabetic characters

    // Use the isalpha and the ispunct functions to extract characters from this string

    // Analyze each character individually
    // Start at given[0]
    // v++ = increment by 1; before an operation
    // ++v = increment by 1; after an operation
    char current = given[0];
    for(int i = 0; current != '\0'; current = given[++i]) {
        if(isalpha(current)){
            cout << (char)(isupper(current) ? tolower(current) : current);
        }
        else if(ispunct(current)){
            cout << ' ';
        }
        }

    return 0;
    }



