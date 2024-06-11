#include <iostream>

#include <vector>
// Utilize vectors in C++
// Ignore any implementations of vectors for now

#include <string>
// To store the book names as strings
// Ignore any specific string functions

using namespace std;

// Long Example of Using the Void Type in C++:
// Let's say I wanted to create a library management system in C++
// Want a program to manage books, checkouts, and show the book inventory 

// When designing a program, it's best to establish all of the function prototypes first.
// Because we can prototype the functions first, and then store them later below the main function => retrieve and modify them
// Easier to add new functions to the bottom of the code rather than the middle. 

// Function Prototypes of Library Management System
// None of these functions are going to take on a value (not going to assume a value)

void displayMenu();
void addBook(vector<string>& library);
void displayBooks(const vector<string>& library);
void issueBook(vector<string>& library);

// Let's define the main function => library management system itself

int main(){
    vector<string> library; // Do not worry about this for now: this is a vector of strings for the library
    int choice;

    while (choice !=4){
        // This will essentially run forever, unless I tell it to stop
        // Not a perfect method; there are better implementations

        // Display user menu
        displayMenu();

        // Take user input as integer
        cin >> choice;

        // Input user's choice as an integer
        switch (choice){
            case 1: // Add books:
                addBook(library);
                break;

            case 2: // Display the books contained in the library
                displayBooks(library);
                break;

            case 3: // Enable the user to check out a book
                issueBook(library);
                break;

            case 4: // User wants to exit the program
                cout << "Program shutting down now" << endl;
                break;

            default: // If the user picks no relevant options
                cout << "Invalid option selected, please try again";
            
        }
        
    }
        return 0;       

}

void displayMenu(){
    // Output all of the relevant choices to the user 
    // This is similar to a user interface without having to utilize UI libraries
    cout << "" << endl;
    cout << "Welcome to the USCA Academy Library Management System" << endl;
    cout << "Choice 1: Add a book to the library" << endl;
    cout << "Choice 2: Diplay books in the library" << endl;
    cout << "Choice 3: Checkout a book from the library" << endl;
    cout << "Choice 4: Exit program" << endl;
    cout << "Enter your selection below from (1-4):" << endl;
}

void addBook(vector<string>& library){
    // Add a book to the library
    // Ignore the inner workings of the program for now:
    string bookName; // Specifies the book name as a string (using the <string> header file)
    cout << "Enter the name of the book: ";
    cin.ignore(); // Clear the input buffer (only what comes next is inputted)
    getline(cin,bookName); //takes the input and assigns it to the bookName (read the input lines)
    library.push_back(bookName); // Add the corresponding book to the library vector 
    // output a confirmation of the program running to the user:
    cout << "Book: " << bookName << " has been added to the library" << endl;
}

void displayBooks(const vector<string>& library){
    cout << "\nList of books in the library:" << endl;
    // Do not worry about the specifics of the next part; all this does is run through the vector and output each value
    if (library.empty()) { // If the library is empty, we want to output this fact to the user
        cout << "There are no books in the library" << endl;
    }
    else {
        for (size_t i = 0; i < library.size(); ++i){
            cout << i+1 << ". " << library[i] << endl;
        }
    }
}

// Function to issue a book from the library
void issueBook(vector<string>& library) {
    if (library.empty()) {
        cout << "No books available to issue." << endl;
        return;
    }

    displayBooks(library);
    cout << "Enter the number of the book to issue: ";
    int bookNumber;
    cin >> bookNumber;

    if (bookNumber < 1 || bookNumber > library.size()) {
        cout << "Invalid book number." << endl;
    } else {
        cout << "Book \"" << library[bookNumber - 1] << "\" has been issued." << endl;
        library.erase(library.begin() + (bookNumber - 1));
    }
}
