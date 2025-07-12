#include <iostream>
using namespace std; 

//? In C++ we define Macros are set of instructions in which we define some method or variables 
#define MYNAME "Aayush Vyas"   //! Don't add semi-colon at the last of macros 

//* Macros are preprocesser directive which we define with hash "#" & "define" #define that enables the text substituation within your code before compilation. They was serve as a way to create symbolic constants or function like constructs 

#define SQUARE a*a //! Don't add semi-colon at the last of macros 


int main() { 
   
    int a = 5; 

    cout << MYNAME << endl; //* Output : "Aayush Vyas"
   cout << SQUARE << endl;  //* Output : 25 


    return 0; 
}