/*
@author:Arista Zetong
@date:06/01/2026
@purpose:This program divides two numbers
*/

// Include the iostream library for input and output operations
#include <iostream>
// Use the standard namespace to avoid having to write std:: before standard library names
using namespace std;

int main() {
    int num1 = 5;
    
    int quotient = num1 / 0; 
    cout << "The quotient of " << num1 << " and " << 0 << " is: " << quotient << endl;
    return 0;
}
