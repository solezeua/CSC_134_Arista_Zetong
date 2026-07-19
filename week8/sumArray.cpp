/*
@author: Arista Zetong
@date: 07/15/2026
@purpose: program to initialize a 1-D array with 5 integer values and sum those values and print the total to the console.
*/


#include <iostream>
using namespace std;

int main() {
    //declare the variable
    const int SIZE = 5;
    int array[SIZE] = {10, 20, 30, 40, 50};
    int sum = 0;

    // Sum the elements of the array
    for (int count = 0; count < SIZE; count++) {
        sum += array[count];
    }
    // Print the sum of the array elements
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
