/*
@author:Arista Zetong
@date:06/01/2026
@purpose:Program to calculate the force.
*/

// Include the iostream library for input and output operations.
#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    //declare the variable for this program
    double m, a, F;

    m = 10; // mass in kg
    a = 9.81; // acceleration in m/s^2

    //Calculate the force
    F = m * a;

    //display the result
    cout << "The force is: " << F << " newtons." << endl;
    return 0;

}