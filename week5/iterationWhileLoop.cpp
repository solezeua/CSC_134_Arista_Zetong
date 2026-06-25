/*
@author: Arista Zetong
@date:06/22/2026
@purpose: program that uses a while-loop that loops until the 100th iteration

*/
#include <iostream>
using namespace std;

int main(){
    // Initialize a counter
    int counter = 1;
    // Loop until the 100th iteration
    while (counter <= 100){
        // print the current iteration
        cout << "Iteration: " << counter << endl;
        // Increment the counter
        counter++;
    }
    return 0;
}