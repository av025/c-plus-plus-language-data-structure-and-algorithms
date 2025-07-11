#include <iostream>
#include <cmath> 
using namespace std; 

int binaryToDecimalConversionMethod(int binary) {  
    int decimalNumber = 0; 
    int i = 0;  
    
    while(binary) {
        int bit = binary % 10; 
        decimalNumber = bit * pow(2, i++) + decimalNumber; 
        binary /= 10; 
    }

    return decimalNumber; 


}

int main() { 
   cout << "Input Binary Number" << endl; 
    int binaryNumber; 
    cin >> binaryNumber;  

    cout << binaryToDecimalConversionMethod(binaryNumber) << endl; 

    return 0; 
}