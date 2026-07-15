/*
@author: Arista Zetong
@date: 07/15/2026
@purpose: Program that has an arrays of 10 integer elements. create an array variable that takes the integer value of 10 and initializes the array to this value.

*/

#include <iostream>
using namespace std;

int main() {
    //declare the variable
    const int NUM_OF_GRADES = 10;
    int grades[NUM_OF_GRADES];
    int sum = 0;

    //prompt the user to enter the grades
    cout << "Enter 10 grades I would calculate the average for you: " << endl;
    for(int count = 0; count < NUM_OF_GRADES; count++){
        cout << "Enter a grade " << (count + 1) << ": ";
        cin >> grades[count];
        sum += grades[count];
    }

    //calculate the average
    double average = static_cast<double>(sum) / NUM_OF_GRADES;

    //display the average
    cout << "The average of the grades is: " << average << endl;

    return 0;
}