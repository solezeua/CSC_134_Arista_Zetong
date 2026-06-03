/*
@author:Arista Zetong
@date:06/01/2026
@purpose:Program to calculate the velocity.
*/

// Include the iostream library for input and output operations.
#include <iostream>
using namespace std;

int main(){
    //declare the variable for this program
    double distance, time, velocity;

    distance = 400; // distance in miles
    time = 4; // time in hours  
    
    //Calculate the velocity
    velocity = distance / time; 

    //display the result
    cout << "The velocity is: " << velocity << " mph." << endl;
    return 0;
}