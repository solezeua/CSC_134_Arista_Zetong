/*
@author:Arista Zetong
@date:06/15/2026
@purpose: Program that calculate the average of the values entered by the user.
*/

// Include the iostream library for input and output operations.
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num1, num2, num3;
    double average;

    //Get the three values.
    cout <<"Enter three integers values and I will average them: ";
    cin >> num1 >> num2 >> num3;

    //Calculate the average of the three integers values.
    average = (num1 + num2 + num3) / 3.0;//Use 3.0 to ensure that the division is done in floating-point.
    cout << fixed << setprecision(2);//Set the output to show two decimal places.
    cout << "The average of your three numbers is: " << average << endl;

    return 0;
}