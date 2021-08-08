// I am doing a madlibs to practice input output in C++
// August 8, 2021

#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
//string 
    string number1="Enter a number"; 

    //cout << "Initial value of sometext is: " << sometext << endl;  
    
    string bodyp = "Enter a body part ";
    
    
    getline(cin, number1);  //get the number from the user     
    getline(cin, bodyp);  //get the bodypart from the user 


    cout << "Scout has " << number1 << bodyp <<endl;  //Writing the given text back to the console.

    return 0;
}
