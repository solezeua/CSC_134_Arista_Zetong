/*
@author:Arista Zetong
@date:06/01/2026
@purpose:Program to calculate the voltage.
*/

// Include the iostream library for input and output operations.
#include <iostream>
using namespace std;

int main(){
    //declare the variable for this program
    double V, l, R;

    l = 10; // length in amps
    R = 2; // resistance in ohms

    //Calculate the voltage
    V = l * R;

    //display the result
    cout << "The voltage is: " << V << " volts." << endl;
    return 0;
}

    