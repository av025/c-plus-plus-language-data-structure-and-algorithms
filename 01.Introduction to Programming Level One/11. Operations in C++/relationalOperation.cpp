#include <iostream> 
using namespace std; 


int main() {
    //* Relational Operations 
    // When we have to find relation betweed two or more than two operands than we are using relational operator. 
    //! Relational operator always return the boolean values.

    //* Let explore different type of relational operations 
    //? 1st. Greater than relational operator :  
    // When we have to find greater than value between two operands than we are using greater than operator. 
    int valueOne = 5;  
    int valueTwo = 6;   
    //* applying the greater than relational operator 
    cout << (valueOne > valueTwo) << endl;  // Output :  0 as false  
    cout << (valueTwo > valueOne) << endl;  // Output : 1 as true  

    //? 2nd. Smaller than relational operator : 
    //  When we have to find smaller than value between two operands than we are using smaller than operator. 
   int valueThree = 5; 
   int valueFour = 8; 
   //* applying the smaller than relational operator 
   cout << (valueThree < valueFour) << endl; // Output : 1 as true 
   cout << (valueFour < valueThree) << endl; // Output : 0 as false 

  //? 3rd. Greater than Equal to operator 
  // In this operator Greater than equal to two things are check first was greater than and second was equal to if any  one condition statisfied than it return boolean value according to that 
  int valueFive = 5; 
  int valueSix = 6; 
  int valueSeven = 5; 
 
  //* applying greater than equal to operator 
  cout << (valueFive >= valueSix) << endl;  // Output : 0 as false 
  cout << (valueFive >= valueSeven) << endl; // Output : 1 as true 

  //? 4th. Smaller than Equal to operator 
  // In this operator smaller than equal to two things are check first was samller than and second was equal to if any one condition was satisfied than it return boolean value according to that 
  int valueEight = 6; 
  int valueNine = 8; 
  int valueTen = 8; 

  //* applying smaller than equal to operator 
  cout << (valueEight <= valueNine) << endl; // Output : 1 as true 
  cout << (valueNine <= valueTen) << endl;  // Output : 1 as true 

 //? 5th. Equal to operator 
 // This relational operator equal to check if the both operands are equal to each other or not. 
 int valueEleven = 22; 
 int valueTwelve = 22; 
 cout << (valueEleven == valueTwelve) << endl; // Output : 1 as true 

//? 6tn. Not Equal to operator 
// This Not equal to operator check if the operands are not equal to each other. 
int valueThirteen = 15; 
int valueFourteen = 16; 
cout << (valueThirteen != valueFourteen) << endl; // Output : 1 as true 


return 0; 

}