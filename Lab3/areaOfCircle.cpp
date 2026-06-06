/*
@author:Arista Zetong
@date:06/05/2026
@purpose:Program that calculate the area of a circle.
*/

//include the iostream library for input and output operations.
#include <iostream>
using namespace std;

int main(){
    //declare the variables for this program
    float radius, area;
    double pi;



    radius = 19;
    pi = 3.1415;

    //calculate the area of the circle using the formula: area = pi * radius * radius
    area = pi * radius * radius;
    //print the result to the console.
    cout << "The area of a circle with radius " << radius << " is: " << area << endl;
    return 0;
}