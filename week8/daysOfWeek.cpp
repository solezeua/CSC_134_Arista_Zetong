/*
@author: Arista Zetong
@date: 07/15/2026
@purpose: Define an array of Strings that contains the days of the week and print them.
*/

#include <iostream>
using namespace std;

int main() {
    //declare the variable
    const int DAYS = 7;
    
    //initialize the array with the names of the days of the week
    string days[DAYS] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    //use a for-loop to print the names of the days of the week
    for (int count = 0; count < DAYS; count++) {
        cout <<"Day "<< count + 1 << ": " << days[count] << endl; // Print the name of the day at the current index

    }

    return 0;
}