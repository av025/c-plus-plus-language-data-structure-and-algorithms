#include <iostream> 
//* Now we import iostream header file in which all the defination and use of methods written to run our cout statement 
//* so whenever we have to take input or do output than we have to include header file iostream "input output stream" in our block of file or in our whole file. otherwise c++ compiler start giving error that "cout was not defined in this scope"

using namespace std; 
//* In above statement explicitly we give instruction to our compiler that all the methods are used in this file was of c++ standard library so our compiler can't confuse what to do with statement or methods and compiler don't do collision if we include other header file which have same methods name and don't give error to us. 

//* This was the entry point of our C++ Program this int main function 
int main() {

    cout << "Aayush Vyas"; 
    //* For print something on standard output we have to use cout object of standard c++ library. 
    
    
}