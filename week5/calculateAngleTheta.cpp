/*
@author: Arista Zetong
@date:06/22/2026
@purpose: Program that calculates the angle theta in a right triangle.
The angle theta is adjacent to leg x
use the equation x2+y2=c2
 , let c equal the hypotenuse
Note: use the atan2() function, to convert from radians to degrees use 180/π
. research the atan2() function and how it can be used in your program.
*/

//include the iostream library for input and output operation.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    // Declare variables for the sides of the right triangle
    int length_x = 3;
    int height_y = 4;

    // Calculate the hypotenuse
    double hypotenuse = sqrt(length_x * length_x + height_y * height_y);

    // Calculate the angle theta in radians
    double theta_radians = atan2(height_y, length_x);
    

    // Convert the angle to degrees
    double theta_degrees = theta_radians * 180 / M_PI;
    cout << fixed << setprecision(2);

    // Print the result
    cout << "The angle theta is: " << theta_degrees << " degrees" << endl;
    while (theta_degrees == 53.13){
        cout<< "This is a 3-4-5 triangle" << endl;

    };
    
    cout<< "This is not a 3-4-5 triangle" << endl;
    
    return 0;
}

