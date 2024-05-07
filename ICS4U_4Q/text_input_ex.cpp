// Text Input

#include <iostream>

using namespace std;

// Simple program to ask a user for their first name, last name, and their age

int main() {
// Start the program by prompting the user to add their name and their age.
    cout << "Please enter your name and age below\n";
// Remember, variables must be declared before they can be inputted by a user
// Utilize the ??? to signify the variable is unknown
    string first_name = "???";
    string last_name = "???";
    int age = -1;
// Get the input for everything
    cin >> first_name >> last_name >> age;
// Let's output a greeting to this individual (user)
    cout << "Hello, " << first_name << ' ' << last_name << " (age " << age << ")\n";
    return 0;
}

// In order to input variables, either separate with a space or an enter