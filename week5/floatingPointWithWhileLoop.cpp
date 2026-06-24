/*
@author: Arista Zetong
@date:06/22/2026
@purpose: Program that uses while loop to prompt a user for 10 grades(must be floating point values) 
and calculate the average and print the result to the console after all 10 grades have been entered
*/

// Include the iostream library for input and output operations.
#include <iostream>
using namespace std;

int main(){
    int num = 0;
    float grade;
    float average = 0;
// Prompt the user to enter 10 grades.
    cout << "Please enter 10 grades (as floating point values):" << endl;
// Loop through the grades.
    while (num < 10){
        // Prompt the user to enter a grade.
        cout << "Enter grade " << num + 1 << ": ";
        // Prompt the user to enter a grade.
        cin >> grade;
        // Add the grade to the average.
        average += grade;
        // Increment the number of grades.
        num++;
    }
    // Calculate the final average.
    average = average / 10;
    // Print the final average.
    cout << "The average of the 10 grades is: " << average << endl;


    return 0;
}