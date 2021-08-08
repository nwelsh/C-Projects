// I am doing a madlibs to practice input output in C++

#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
//string 
    string number1="Enter a number"; 

    //cout << "Initial value of sometext is: " << sometext << endl;  

    getline(cin, number1);  //get the number from the user 
    
    string bodyp = "Enter a body part "
        
    getline(cin, bodyp);  //get the number from the user 


    cout << "Scout has " << number1 << bodyp <<endl;  //Writing the given text back to the console.

    return 0;
}
