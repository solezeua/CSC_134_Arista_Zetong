/*
@Author: Arista Zetong
@Date: 07/14/2026
@Purpose: This is my first attempt at using arrays in C++.
*/

#include <iostream>
using namespace std;

int main(){
    const int NUM_OF_ELEMENTS = 5;// This is a constant variable that holds the number of elements in the array.
    int myArray[NUM_OF_ELEMENTS];// This is an array that holds 5 integers.
    
    myArray[0] = 100;
    myArray[1] = 200;
    myArray[2] = 300;
    myArray[3] = 400;
    myArray[4] = 500;

    

    //display the elements of the array
    cout << "The first index of the array is: "<<myArray[0]<<endl;
    cout << "The second index of the array is: "<<myArray[1]<<endl;
    cout << "The third index of the array is: "<<myArray[2]<<endl;
    cout << "The fourth index of the array is: "<<myArray[3]<<endl;
    cout << "The last index of the array is: "<<myArray[4]<<endl;

    return 0;
}