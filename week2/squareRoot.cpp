/*
@author:Arista Zetong
@date:06/01/2026
@purpose:This program calculates the square root of a number
*/

// Include the iostream library for input and output operations
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   //declare the variable for this program
   double num, result;

   //ask the user to input a number and store it in the variable num
   cout << "Enter a real number: ";
   cin >> num;

   //calculate the square root of the number and store it in the variable result
   result = sqrt(num);

   //display the result
   cout << "The square root of " << num << " is: " << result << endl;

   return 0;
}