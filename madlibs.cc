// I am doing a madlibs to practice input output in C++

#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
//string 
    string sometext="Enter a number"; 

    //cout << "Initial value of sometext is: " << sometext << endl;  

    getline(cin, sometext);  //get the number from the user 

    cout << "You entered: " << sometext << endl;  //Writing the given text back to the console.

    return 0;
}
