#include <iostream>
using namespace std; 


int main() {
//* In C++ there was two types of integers 
//? Signed integers 
//*  Signed which range was from -2**n to 2**n - 1 from negative to positive numbers 
// As we know that integers take 4 Bytes of memory in our program and maximum value upto stored in our integer datatype was 2**32 which was 4294967296 value but in signed we have negative value and positive value also so this value was divide between that -2147483648 to 2147483647

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


//? How any integer number will be signed or unsigned will be decide in memory of our program ? 
//* The integers are positive or negative was find by the most-left bit if the value was 0 than it was positive number and if left-most bit was 1 than it was negative number. 

//* Understand with example 
int numberTwo = 3;  

//* This above decimal number 3 was stored in binary equivalent which was 11 but we are using int datatype which takes 4 byte of memory space in program. 

//? 00000000 00000000 00000000 00000011   
//?  1 byte   2 byte   3 byte    4 byte   
//! Here left-most significant bit was 0 it means it was positive number.   

//? If we want to check if any number was positive than left-most significant bit was 0 and in the case of negative left-most significant bit was 1.   

int numberThree = -3; 
//* This above decimal number -3 was stored in binary equivalent which was we find with 3 steps 
//* 1st. ignore the negative sign 
//* 2nd. find binary equivalent 
//* 3rd. Find 2's compliement 

//? 11111111 11111111 11111111 11111101 
//?  1 Byte  2 Byte    3 Byte   4 Byte   
//! If it was negative number than left-most significant bit was 1.  

//* In memory when we stored our data or value than it's left-most bit was called most-significant bit and sign bit and most-right side bit was called as least-significant bit. 

//! Char datatypes also have signed and unsigned values so if we have to find range of unsigned bit than we have to do half our total characters 256 was there so signed bit range was -128 to 127  and unsigned bit range was 0 to 256 

//* So the generic formula of signed bit was 2**n to 2**n - 1 and unsigned was 0 to 2**n - 1 



return 0; 

}