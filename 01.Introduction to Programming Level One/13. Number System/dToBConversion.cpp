#include <iostream>
#include <cmath>
using namespace std; 

//* Decimal to Binary Conversion 

int decimalToBinaryConversionMethodOne(int num) {
    // Division method 
  int binaryNumber = 0; 
  int i = 0; 
  
  while (n > 0) {
    int bit = num % 2; 
    binaryNumber = bit * pow(10, i++) + binaryNumber; 
    cout << binaryNumber << endl; 

    num = num / 2; 
  }

  return binaryNumber; 
}

int decimalToBinaryConversionMethodTwo(int num) {
    //* Bitwise Number 
    int binaryNumber = 0; 
    int i = 0; 
    if(num > 0 ) { 

        int bit = num & 1; 
        binaryNumber = bit * pow(10, i++) + binaryNumber; 

        num = num >> 1; 
 
    } 

    return binaryNumber; 
}

int main() {
   
  int n; 
  cin >> n; 

//   int binary = decimalToBinaryConversionMethodOne(n); 

int binary = decimalToBinaryConversionMethodTwo(n);

  cout << binary << endl; 


  


    return 0; 
}