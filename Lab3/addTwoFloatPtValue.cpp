/*
@author:Arista Zetong
@date:06/04/2026
@purpose:Program  that adds two floating point values together and print the result.
*/

// Include the iostream library for input and output operations.
#include <iostream>
using namespace std;

int main(){
    //declare the float variable for this program
    float num1, num2, result;
    num1 = 3.14;
    num2 = 2.71;

    //calculate the sum of the two numbers
    result = num1 + num2;

    //print the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}