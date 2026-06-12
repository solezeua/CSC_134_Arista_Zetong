/*
@author:Arista Zetong
@date:06/01/2026
@purpose:This program calculates the product of two numbers
*/

// Include the iostream library for input and output operations
#include <iostream>
// Use the standard namespace to avoid having to write std:: before standard library names
using namespace std;

int main() {
    int num1 = 5; // Declare and initialize the first number
    int num2 = 10; // Declare and initialize the second number
    int product = num1 * num2; // Calculate the product
    std::cout << "The product of " << num1 << " and " << num2 << " is: " << product << std::endl;
    return 0;
}

