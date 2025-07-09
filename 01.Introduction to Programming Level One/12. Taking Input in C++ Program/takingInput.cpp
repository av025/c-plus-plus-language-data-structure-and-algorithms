#include <iostream>
using namespace std; 

int main() {
 
    //* Now in C++ we take input with the help of cin method same like for print we used cout method. 
    char character; // declare the variable 
    cin >> character;   //* Here it take input from user with the help of cin method 
    //? Understand the cin syntax "cin >>"
    //* cin : this cin stands for character input and it takes input from the user for this method our iostream header file was important for execution and process our program 
    //* >> : greater than symbol is part of cin method. 

    cout << character;  

    int numberOne; int numberTwo; 
    cin >> numberOne , numberTwo; 


int additionOfTwoNumb = numberOne + numberTwo; 
cout << additionOfTwoNumb << endl; 
  

    return 0; 
}