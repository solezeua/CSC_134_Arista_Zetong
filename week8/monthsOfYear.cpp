/*
@author: Arista Zetong
@date: 07/15/2026
@purpose: program that uses 1-D arrays and for-loops to list the months. 
*/

#include <iostream>
using namespace std;

int main() {
    //declare the variable and initialize the array with the number of days in each month
    const int MONTHS = 12;
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //Print the number of days in each month using a for-loop
    for (int count = 0; count < MONTHS; count++)
    {
        cout << "Month " << (count + 1) << " has "; 
        cout << days[count] << " days." << endl;
    }

    return 0;
    
}