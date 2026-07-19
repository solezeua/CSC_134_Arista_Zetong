/*
@author: Arista Zetong
@date: 07/15/2026
@purpose:use a for-loop and print the value of each array element to the console based on its array index.
*/
#include <iostream>
using namespace std;

int main() {
    //declare the variable
    const int SIZE = 7;
    int numberList[SIZE] = {1,2,4,8};

    // print the value of each array element based on its index
    for (int index = 0; index < SIZE; index++) {
        cout << "Element at index " << index << ": ";
        cout << numberList[index] << endl;
    }

    return 0;

}