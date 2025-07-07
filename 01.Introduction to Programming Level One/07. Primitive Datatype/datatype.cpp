#include <iostream>
using namespace std; 

int main() {
//* Introducing and exploring primitive type data 

//? int datatype 
// When we have to stored integer number type data both positive and negative than we are using int type let understand with example 
int numberOne = 25; 
int numberTwo = -25; 

cout << numberOne << endl << numberTwo << '\n'; 

//* int datatype takes 4 byte of memory space in our program it means 32 bits 4 * 8 = 32 and we check also with the help of sizeof() function 
cout << sizeof(numberOne) << endl;  //* Output was 4 that's means 4 Byte it give output in integer only. 

//? char datatype 
// When we have to stored character in our program than we used char datatype let understand with example 
char characterOne = 'a'; 
char characterTwo = 'A'; 
cout << characterOne << endl; 
cout << characterTwo << endl;  

//* char datatype takes 1 byte of memory space in our program and we can check with sizeof() operator 
cout << sizeof(characterOne) << endl ; //* Output 1 means 1 Byte = 8 bits  

//! sizeof() operator helps to find the memory space taken our datatypes in our program. 

//? float datatype 
// When we have to stored decimal number in both positive and negative range than we are using float datatype let understand with example 
float floatingPointOne = 89.59; 
float floatingPointTwo = -11.56; 

cout << floatingPointOne << endl; 
cout << floatingPointTwo << endl; 

//* float datatype takes 4 byte of memory space in our program and we can check with sizeof() function
cout << sizeof(floatingPointOne) << endl;  //* Output 4 means 4 Byte    

//? long datatype 
// when we have to stored bigger integer number value in both positive and negative range than we used long datatype and this number are bigger than the range of our int datatype .
long numberLongOne = 47899777; 
long numberLongTwo = -4479964; 

cout << numberLongOne << endl; 
cout << numberLongTwo << endl;  

//* long datatype memory size was depend on the machine processor on 32 bit CPU it takes 4 byte and in 64 bt CPU it takes 8 byte of memory space in our program. 
// We can check that also with the help of sizeof function 
cout << sizeof(numberLongOne) << endl; //* Output was 4 means 4 byte because of 32 bit CPU  

//? Bool or Boolean Datatype 
// When we need logical value to stored for logical based situation or operation or conditional based operation in our program than we use bool datatype which have only two values true and false.

bool flag = true; 

cout << flag << endl;  // Output : 1 which was equivalent to true   

flag = false; 

cout << flag << '\n';  // Output : 0 which was equivalent to false  

//* Let's check how much memory space taken by bool values with sizeof() operator 
cout << sizeof(flag) << endl; // Output : 1 it means 1 Byte 

//? In this bool datatype our 7 bits are just wasted because we represent our true with 1 and 0 for false and we are using Byte when our work completed with 1 bit also because the smallest unit to represent program memory was Byte only.



//! Here we understand that In C++ Datatypes are machine dependent they depends on CPU Processor



return 0; 
}