// lesson 4 https://www.learn-cpp.org/en/Strings
// this talks about strings 

#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
//string 
    string sometext="This is a new text"; 

    cout << "Initial value of sometext is: " << sometext << endl;  //write to console
    //endl adds a new line after 

    getline(cin, sometext);  //Reading textinput from the keyboard

    cout << "You entered: " << sometext << endl;  //Writing the given text back to the console.

    return 0;
}
