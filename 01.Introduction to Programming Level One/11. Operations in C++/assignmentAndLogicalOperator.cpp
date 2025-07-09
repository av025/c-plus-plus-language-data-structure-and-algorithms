#include <iostream> 
using namespace std; 

int main() { 

    //? Assignment operator 
    // This assignment operator was used to assign value to any variable mainly and there was some arithmetic assignment operator also let understand with example 
  
    char characterOne = 'a';   //* To Assign variable character a we used equal assignment operator to assign value to variableOne  

    //? Arithmetic operators 
    // Let understand arithmetic operators with example 
    int number = 20; 
   // addition assignment operator 
   number += 2 ;  
   cout << number << endl; 
   // subtraction assignment operator 
   number -= 2; 
   cout << number << endl; 
   // multiplication assignment operator 
   number *= 2; 
   cout << number << endl; 
   // division assignment operator 
   number /= 2; 
   cout << number << endl; 
   // modulus assignment operator 
   number %= 2; 
   cout << number << endl; 

  //? Logical Operator 
  //* This logical operators mainly used for condition based situation in our program and it return boolean value as output.  

  //* Logical operators are of three type 

  //? 1st. AND Logical Operator "&&"
  // In this Logical operator all the value should be true in operands than only it returns true output otherwise return false output let understand with example. 
  
  // Create some condition criteria to do voting 
  bool ageGreaterThanEighteen = true; 
  bool citizenOfIndia  = true; 

  bool canVoteOrNot = ageGreaterThanEighteen && citizenOfIndia; // applying AND Operator "&&" 

  cout << canVoteOrNot << endl;  // Output : 1 as true  

  // if 
  citizenOfIndia = false; 

 canVoteOrNot = ageGreaterThanEighteen && citizenOfIndia; 

  cout << canVoteOrNot << endl; // Output : 0 as false 
 //! In AND Logical Operator all the operands condition or value should be true and we are using two ampersand symbol   

cout << (true && true) << endl;   // Output : 1 as true 
cout << (false && true) << endl;  // Output : 0 as false 
cout << (false && true) << endl;  // Output : 0 as false 
cout << (false && false) << endl; // Output : 0 as false 


 //? 2nd. OR Logical Operator "||"
 // In this OR logical operator only one codition or value was true among all operands than only OR operator return true otherwise it return false if all condition was false or value was false. 

 // Create some condition criteria for PCM stream student got good marks in maths mainly 
  bool studentGoodMarksInMaths = true; 
  bool studentGoodMarksInScience = false; 
  
  bool studentGetPCMStream = studentGoodMarksInMaths || studentGoodMarksInScience;  // applying the Logical OR Operator || 
  cout << studentGetPCMStream << endl;  // Output : 1 as true 

  // if student don't get good marks 
  studentGoodMarksInMaths = false; 
  
  studentGetPCMStream = studentGoodMarksInMaths || studentGoodMarksInScience; 
  cout << studentGetPCMStream << endl; // Output : 0 as false  

  //! In Logical OR Operator only one codition or value should true among all operands than OR operator give output true or if all the values and condition was false than it return false as output. In OR Operator we are using two pipes ||  

  cout << (true || false) << endl;  // Output : 1 as true 
  cout << (false || true) << endl;  // Output : 1 as true 
  cout << (true || true) << endl;  // Output : 1 as true 
  cout << (false || false) << endl; // Output : 0 as false 


  //? NOT Logical Operator "!"
  // This NOT Logical Operator are uniary operator which just give opposite boolean value of our value or condition let understand with example 

  // Create some criteria like age greater than 18 
  bool ageEighteenPlus = true; 
  bool notLogicalOperator =!ageGreaterThanEighteen; // Applying the NOT Operator 
  cout << notLogicalOperator << endl;  // Output : 0 as false so it just flip our value 

//! This NOT Logical Operator is just flip our value or condition to opposite boolean value and here we used exclamation mark for NOT Operator "!"
cout << !true << endl;  // Output : 0 as false 
cout << !false << endl; // Output : 1 as true 
 
    return 0; 
}