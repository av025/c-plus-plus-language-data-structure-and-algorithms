#include <iostream>
using namespace std; 


int main() {
//* In C++ there was two types of integers 
//? Signed integers 
//*  Signed which range was from -2**n to 2**n - 1 from negative to positive numbers 
// As we know that integers take 4 Bytes of memory in our program and maximum value upto stored in our integer datatype was 2**32 which was 4294967296 value but in signed we have negative value and positive value also so this value was divide between that -2147483648 to 2147483648 

//* Let see the example of signed integer 
int numberX = 100; 
cout << numberX << endl;  // Output : 100 

int numberY = -200; 
cout << numberY << endl;  // Output : -200 

signed int number = 100;  
cout << number << endl;  // Output : 100 

//? Unsigned Integers 
//* Unsigned integers are those integers in which we can just have only positive value not positive value so advantage was we can store more bigger positive value as compared to unsigned because in unsigned our range was distributed in positive and negative value. 
//? If we want to create the singed integers than we have to explicitly define the keyword signed just before declaring the variable. 

unsigned int numberZ = 2000;  
//* When we are using unsigned keyword than only positive integers are stored in our variable. 
cout << numberZ << endl;  // Output : 2000  

//? What happen when we assign unsigned variable negative value 
unsigned int numberA = -500; 
cout << numberA << endl;  //! It prints the garbage value when we assign the negative value. 

return 0; 

}