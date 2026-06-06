/*
@author:Arista Zetong
@date:06/05/2026
@purpose:Program that calculate the square footage of a new home.
*/

//include the iostream library for input and output operations.
#include <iostream>
using namespace std;
int main(){
    //declare the variables for this program
    float length, width, A;

    //assign the value of length and width
    length = 50;
    width = 32;

    //calculate the square footage using the formula: A = length * width
    A = length * width;

    //Print the correct unit along with the result.
    cout << "The square footage of a new home with length " << length << " and width " << width << " is: " << A << " square feet." << endl;
    return 0;
}