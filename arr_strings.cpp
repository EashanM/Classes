#include <iostream>

using namespace std;

// Strings in C++ are collections of characters held in memory => the strings are held in a character array

int main(){

    // Going to determine what is malfunctioning here:
    // Error found: single quotation marks denote a single character, and double denote a string literal
    // String literal: string of characters

    // Use char for single characters (single quotations marks)
    // Use char* for string literals (double quotation marks)

    // Define the goodmorning array
    char goodmorning[] = {'G','o', 'o', 'd', ' ', 'm', 'o', 'r', 'n', 'i', 'n', 'g', '!', '\0'};
    // Note: \0 is the null character: indicates the end of a string

    cout << goodmorning << endl;

    // Another method of defining character arrays: use string literals (double quotation marks)

    // Note: we do not need the null character; c++ can tell when this string ends

    char goodafternoon[] = "Good afternoon!";

    cout << goodafternoon << endl;


    return 0;
    
}
