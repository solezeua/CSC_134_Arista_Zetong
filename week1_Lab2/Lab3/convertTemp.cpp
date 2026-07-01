/*
@author:Arista Zetong
@date:06/05/2026
@purpose:Program to convert temperature in Fahrenheit to Celsius using floating point data types.
*/

// Include the iostream library for input and output operations.
#include <iostream> 
using namespace std;

int main(){
    //declare the variables for this program.  
    float F, C;
    //assign the value of F to 98.6
    F = 98.6;
    //calculate the temperature in Celsius using the formula: C = (F - 32) * 5 / 9
    C = (F - 32) * 5 / 9;
    //print the result
    cout << F << " degrees Fahrenheit is equal to " << C << " degrees Celsius." << endl;
    return 0;
}
