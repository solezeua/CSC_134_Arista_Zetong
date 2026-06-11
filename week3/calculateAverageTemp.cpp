/*
@author:Arista Zetong
@date:06/05/2026
@purpose: program that calculates and reports what the new average July high temperature is for each city.
*/

// Include the iostream library for input and output operations.
#include <iostream>
using namespace std;

int main(){
    //declare the variables for this program
    double newyorkTemp, denverTemp, phoenixTemp, avgeNewyorkTemp, avgeDenverTemp, avgePhoenixTemp;

    //assign the values of the temperatures for each day of the week
    newyorkTemp = 85;
    denverTemp = 88;
    phoenixTemp = 106;
    


    //calculate the new average high temperature for each city if temperatures rise by 2 percent.
    avgeNewyorkTemp = newyorkTemp * 1.02;
    avgeDenverTemp = denverTemp * 1.02;
    avgePhoenixTemp = phoenixTemp * 1.02;
    

    //print the result to the console.
    cout << "The average July high temperature for each city is: " << endl;
    cout << "New York: " << avgeNewyorkTemp << " degrees Fahrenheit." << endl;
    cout << "Denver: " << avgeDenverTemp << " degrees Fahrenheit." << endl;
    cout << "Phoenix: " << avgePhoenixTemp << " degrees Fahrenheit." << endl;
    return 0;
}


