/* @author: Arista Zetong
   @date: 06/29/2026
   @description: 7.program that accepts an integer input from a user and display the multiplication 
   table for the entered integer. The multiplication table should display the results from 0 -12. 
   For example,if the entered integer is 2, then you should show the table and it values between 0 and 12.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Multiplication table for " << num << ":" << endl;
    for (int i = 0; i <= 12; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}


   
