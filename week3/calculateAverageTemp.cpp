/*
@author:Arista Zetong
@date:06/11/2026
@purpose: program that calculates and reports what the new average July high temperature is for each city.
*/

// Include the iostream library for input and output operations.
#include <iostream>
using namespace std;

int main(){
    //declare the variables for this program
    double newyorkTemp, denverTemp, phoenixTemp; 
    double avgeNewyorkTemp, avgeDenverTemp, avgePhoenixTemp;
    double percentIncrease;
    
    //assign the values of the temperatures for each day of the week
    newyorkTemp = 85;
    denverTemp = 88;
    phoenixTemp = 106;
    percentIncrease = 2;


    //calculate the new average high temperature for each city if temperatures rise by 2 percent.
    avgeNewyorkTemp = newyorkTemp * (1 + percentIncrease / 100);
    avgeDenverTemp = denverTemp * (1 + percentIncrease / 100);
    avgePhoenixTemp = phoenixTemp * (1 + percentIncrease / 100);
    

    //print the result to the console.
    cout << "The average July high temperature for each city is: " << endl;
    cout << "New York: " << avgeNewyorkTemp << " degrees Fahrenheit." << endl;
    cout << "Denver: " << avgeDenverTemp << " degrees Fahrenheit." << endl;
    cout << "Phoenix: " << avgePhoenixTemp << " degrees Fahrenheit." << endl;
    return 0;
}


