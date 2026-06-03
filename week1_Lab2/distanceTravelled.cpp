/*
@author:Arista Zetong
@date:06/01/2026
@purpose:Program to calculate the distance travelled.
*/

// Include the iostream library for input and output operations.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declare the variable for this program
    double velocity, time, distance;

    velocity = 80; // velocity in mph
    time = 2; // time in hours  
    
    //Calculate the distance
    distance = velocity * time; 

    //display the result
    cout << "The distance travelled is: " << distance << " miles." << endl;
    return 0;

}