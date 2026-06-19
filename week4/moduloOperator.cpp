/*
@author:Arista Zetong
@date:06/16/2026
@purpose:  program that accepts an integer value from a user. Use the modulo operator to determine if the number entered is even or odd.
*/

// Include the iostream library for input and output operations.
#include <iostream>
using namespace std;

int main(){
    // Declare an integer variable to store the user input.
    int num;

    //Get the integer value from the user.
    cout <<"Enter an integer value and I will determine\n"; 
    cout <<" if it is even or odd: ";
    cin >> num;

    //Use the modulo operator to determine if the number is even or odd.
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    }
    else {
        cout << "The number is odd." << endl;
    }
    
    return 0;
}