#include <iostream>
using namespace std; 

int main() {
  
//* In  programming language they provide some data to store our memory so we can create our program or feature in software development they data which provide by programming language are integer, decimal, strings, boolean, character etc. and they categorize those data in data-types.

//? To store this data in our program we have the smallest unit to store data which was variable this variable was the empty container or bucket and do memory-allocation in our program in our program and with this variable  give name or identifier to that particular memory and we can access through name only. 

//? As the name suggest variables so we can vary our variable value also.... 
int number = 9; 

cout << number << '\n';

number = 15; //* reassign the variable 

cout << number << endl; 


// Declaration of a variable
// When we just declare a variable and do not assign any value to it, this is called declaration.
int value;  // Declaration only

cout << value << endl;  // A random value will be printed, which is known as a garbage value.
// Garbage value is just a leftover value present at that memory location by default.

// Initialization of a variable
// When we declare a variable and assign a value to it at the same time, it is called initialization.
int valueAgain = 10;  // Initialization of variable

cout << valueAgain;  // Outputs: 10



 return 0; 
}
