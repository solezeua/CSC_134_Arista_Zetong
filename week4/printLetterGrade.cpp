/*
@author:Arista Zetong
@date:06/16/2026
@purpose: Program that calculate the average of the values entered by the userand print the letter grade.
*/

// Include the iostream library for input and output operations.
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // constants for the grade thresholds
    const int A_GRADE = 90;
    const int B_GRADE = 80;
    const int C_GRADE = 70;
    const int D_GRADE = 60;

    int num1, num2, num3;
    double average;

    //Get the three values.
    cout <<"Enter three integers values and I will average them: ";
    cin >> num1 >> num2 >> num3;

    //Calculate the average of the three integers values.
    average = (num1 + num2 + num3) / 3.0;//Use 3.0 to ensure that the division is done in floating-point.
    cout << fixed << setprecision(2);//Set the output to show two decimal places.
    cout << "The average of your three numbers is: " << average << endl;
    cout << "The letter grade is: " ;


    // Determine the letter grade based on the average.
    if (average >= A_GRADE) {
        cout << "A";
    }
    else if (average >= B_GRADE) {
        cout << "B";
    }
    else if (average >= C_GRADE) {
        cout << "C";
    }
    else if (average >= D_GRADE) {
        cout << "D";
    }
    else {
        cout << "F";
    }
    cout << endl;
    
    return 0;
}