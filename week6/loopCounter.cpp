/*
@author: Arista Zetong
@date: 06/29/2026
@description: Program that count the number of time a loop execute and print the result.
*/
#include <iostream>
using namespace std;


int main(){
    // Initialize a counter variable to count the number of iterations
    int count = 0;
    // Loop that executes 10 times
    for (int i = 0; i < 10; i++) {
        count++; // Increment the counter for each iteration
        // Print the current iteration number
        cout << "The loop executed " << count << " times." << endl;
    }
    
    
    return 0;
}
