/* @author: Arista Zetong
   @date: 06/29/2026
   @description: 4.program that loops backward from 100 to 1 using a 
   for-loop and print each iteration of the loop to the console using cout.
*/
#include <iostream>
using namespace std;

// Function to loop backward from 100 to 1
int main() {
    // Loop backward from 100 to 1
    for (int i = 100; i >= 1; i--) {
        // Print the current value of i
        cout << "The value of i is: " << i << endl;
    }
    // Return 0 to indicate successful execution
    return 0;
}
