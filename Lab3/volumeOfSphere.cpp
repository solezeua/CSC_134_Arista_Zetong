/*
@author:Arista Zetong
@date:06/05/2026
@purpose:Program to calculate the volume of a sphere using floating point data types.
*/

// Include the iostream library for input and output operations.        
#include <iostream>
using namespace std;

int main(){
    //declare the variables for this program
    int r, V;
    double pi;

    //assign the value of radius and pi
    r = 7;
    pi = 3.1415;

    //caculate the volume of the sphere using the formula: volume = (4/3) * pi * radius^3
    V = (4/3) * pi * r * r * r;
    
    //print  result
    cout << "The volume of a sphere with radius " << r << " is: " << V << endl;
    return 0;
}