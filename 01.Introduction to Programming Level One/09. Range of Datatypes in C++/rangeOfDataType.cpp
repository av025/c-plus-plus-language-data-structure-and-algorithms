#include <iostream>
using namespace std; 

int main() { 

    //? 1st. char datatype in c++ 
    //* As we know that char datatype takes 1 byte of memory space in program and we know that in program memory data was stored in binary equivalent and binary number have only two value 0 and 1. 
    //* So the probability of char datatype range was 2 ** 8  = 256 so in char datatype we have total 256 characters only not more than 256 
    //* Range of char datatype was 0 ----> 255 
    
    //! The generic formula to find range of any datatype was 2 **n - 1 because range start from 0 because in computer science world 0 was starting value in indexing or counting.... 
    
    //? char datatype range was from 0 to 255 and total character they have was 256. 

    //? 2nd. int datatype in c++ 
    //* As we know that int datatype takes 4 byte of memory space in program and we know that in program memory data was stored in binary equivalent so the probability to stored data of int type was 2 ** 32 = 4294967296 upto that value we stored as integer value. 

    //* Range of int datatype was 0 to 2**n - 1 so 4294967295 value was maximum number can stored in our int datatype.  

    //* Similarly we can find range and maximum value of other datatype. 


    //! So generic formula to find Range of Datatype was 2**n - 1 

    return 0; 
}