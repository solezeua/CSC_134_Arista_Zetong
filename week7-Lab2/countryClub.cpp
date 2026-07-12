/*
@Author: Arista Zetong
@Date: 07/08/2026
@Purpose: program that display the projected sales for the next 5 years.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //declare the variable
    
    double membershipFee = 250000.00;
    const double increaseRate = 0.06;
    
    //calculate the projected sales for the next 5 years
    cout << "Projected sales for the next 5 years: " << endl;
    cout << fixed << setprecision(2);
    
    for(int year = 1; year <= 5; year++){
        membershipFee = membershipFee + (membershipFee * increaseRate);
       
        cout << "Year " << year << ": $" << membershipFee << endl;
        
    }
    return 0;
}