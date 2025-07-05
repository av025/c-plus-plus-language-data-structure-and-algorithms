#include <iostream> 
using namespace std; 

int main() {
 
    //? Let see variable naming convention and rule 

    //* 1st. Always start our variable name with an alphabets or alphabets character only otherwise it give error to us. 
    int rollNumber = 02;  
    //! int 10rollNumber = 01;  when we use numeric digit first it give compile error 
    
   //* 2nd. There will be more than one alphabet character or use alphabet words but not give space between them 
   char myCharacterOne = 'A'; 
  //! char my Character Two = 'a';   Here it give compile error because 

  //* 3rd. We can use numeric digits but between our variables and at last can't use in starting of variable. 
  float my1stNumber = 25.5; 
  long number2 = 12478777;  

  //* 4th. No special symbol was used for naming variables except one which was underscore if we want to separate our variable naming than we use underscore symbol "_" 
  int number_one = 01; 
  char first_character = 'a'; 

  //* 5th. We can't use reserved words like keywords and statement in our variable naming otherwise it give error to us. 
  //! int int = 25; It give error to us because we are using keyword 
  //! char cout = 'c'; It give error to us because we are using predefined command  
  
  //* 6th. All statements in C++ are case sensitive it means that the letters in uppercase and letters in lowercase have the different meaning. 

  int MY_NUMBER = 01; 
  int my_number = 02; 

  cout << MY_NUMBER << endl; // Output : 1 
  cout << my_number << endl; // Output : 2  

 //* 7th. Always create meaning full variables so it convey the understanding why we create it and what was it's usage in our program and single character varaible create for updating variable and looping variable only 

 int totalnumber_of_students = 300;  // right way to create variable which convey meaning of it. 
 int i = 1;   //* this single character variable for only looping and updating variable


    return 0; 
}
