/* @author: Arista Zetong
   @date: 06/29/2026
   @description: 2.program that accepts user input using cin for an integer value. 
   After the user enters their value, use a for-loop to iterate over the integer and 
   print out the number of iterations that occur. So for example, if you enter 5, 
   the program should print 0 through 4 on the console.
*/
#include <iostream>
using namespace std;

int main() {
    //
    int num;
    // Prompt the user for an integer input

    cout << "Enter an integer: ";
    // Read the integer input from the user
    cin >> num;
// 
    for (int i = 0; i < num; i++) { // Loop from 0 to num - 1
        cout << "The value of i is: " << i << endl; // Print the current value of i
    }
    return 0;

}