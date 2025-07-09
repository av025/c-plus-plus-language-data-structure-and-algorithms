#include <iostream>

using namespace std; 

int main() {
   
    //? Operations in C++ Programming language 
    //* Operations in our programming language if we have to do calculation, we have to evaluate something or we have to do processing something with our data.   

    //? There are different-different type of operations are provided by c++ programming language. 

    //* Arithmetic Operation 
    // When we have to perform mathematical operation with our data than we have to use arithmetic operation.

    //? Addition operation : when we have to  perform addition on two data than we are using addition operator. 
    int numberOne = 5;   // intialize numberOne variable 
    int numberTwo = 5;  // intialize numberTwo variable 

 cout << numberOne + numberTwo << endl;  // Output : 10 

//! The Operator we applied is know as Operator and the variables on which we are applying are called operators so above addition sign "+" was operator and numberOne and numberTwo are operands.  

//? Subtraction operation : When we have to perform subtraction on two operands than we are using subtract operator. 
int numberThree = 6; 
int numberFour = 4; 

cout << numberThree - numberFour  << endl;  // Output : 2  

//? Multiplication operation : When we have to perform multiplication on two operands than we are using multiply operator. 
int numberFive = 4; 
int numberSix = 4; 

cout << numberFive * numberSix << endl; // Output : 16  

//? Divide operation : When we have to perform division  on two operands than we are using divsion operator 
int numberSeven = 10; 
int numberEight = 2; 

//* There was two type of division operator provide by programming language 

//* Division operator : This division operator was used to find qoutient as output of our operands. 

int divisionOperation = numberSeven / numberEight;  //* Here we using division operator 

cout << divisionOperation << endl;  // Output : 5 

//* Modulus operator : In this we also do division only but as output we get remainder of our operands.  

int modulusOperation = numberSeven % numberEight; 

cout << modulusOperation << endl;  // Output : 0 




return 0; 
}
