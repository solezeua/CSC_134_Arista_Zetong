/*
@author:Arista Zetong
@date:06/15/2026
@purpose: Example of if-else statement in c++.
*/

// Include the iostream library for input and output operations.
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int HIGH_SCORE = 95;
    int score1, score2, score3;
    double average;

    //Get the three test scores.
    cout <<"Enter three test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;

    //Calculate the average of the three test scores.
    average = (score1 + score2 + score3) / 3.0;//Use 3.0 to ensure that the division is done in floating-point.
    cout << fixed << setprecision(2);//Set the output to show two decimal places.
    cout << "Your average score is: " << average << endl;

    //If the average is a high score, congratulate the user.
    if (average > HIGH_SCORE) {
        cout << "Congratulations! You have a high score!\n" << endl;
    }
    else {
        cout << "Keep practicing! You can do better.\n" << endl;
    }
    return 0;
}