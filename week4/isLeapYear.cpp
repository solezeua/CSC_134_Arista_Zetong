/*
@author:Arista Zetong
@date:06/18/2026
@purpose: program that accepts a year from a user and determines if the year is a leap year. If it's a leap year, 
@then print "The year you entered xxxx is a leap year". If the year is NOT a leap year, then print "The year you 
@entered xxxx is NOT leap year".
*/

// Include the iostream library for input and output operations
#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the year
    int year;

    // Prompt the user to enter a year
    cout << "Enter a year: "; // Prompt the user to enter a year
    cin >> year; // Read the year from the user

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {// Check the leap year conditions
        cout << "The year you entered " << year << " is a leap year." << endl; // Print the result
    } else {
        cout << "The year you entered " << year << " is NOT a leap year." << endl; //print the result 
    }

    return 0;
}