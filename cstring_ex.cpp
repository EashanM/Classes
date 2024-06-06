#include <iostream>
#include <cstring>

using namespace std;

// Now, let's try an example with the cstring library


int main(){
    char fragment1[] = "I'm a st";
    char fragment2[] = "ring!";
    char fragment3[20];
    // fragment3 is declared but NOT initialized
    char finalstring[20] = "";
    // declared and initialized with the null character

    strcpy(fragment3, fragment1);
    // Copies fragment1 onto fragment3, giving fragment3 value of "I'm a st"
    strcat(finalstring, fragment3);
    // Concatenate fragment3 onto finalstring, gives finalstring the same contents as fragment3
    strcat(finalstring, fragment2);
     // Concatenate fragment2 onto finalstring, gives finalstring the same last contents as fragment2

    cout << finalstring << endl;
    return 0;

}

// Note, you can always find the documentation for these libraries: http://www.cplusplus.com/reference/