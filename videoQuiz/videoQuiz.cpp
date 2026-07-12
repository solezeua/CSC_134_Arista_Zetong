/*
@author: Arista Zetong
@date: 07/03/2026
@Purpose: This program allows the user to enter test scores and 
calculates the average score, the number of passing scores, and 
whether the class average is passing or not.
*/

#include <iostream>

using namespace std;
// Function to calculate the average score
int main()
{
    // Declare variables to hold the values. 
    int score;
    int count = 0;
    int passingScores = 0;
    float total = 0.0f;
    bool continueEntering = true;
 // Loop to allow the user to enter multiple test scores
    while (continueEntering)
    {
        // Prompt the user to enter a test score
        cout << "Enter a test score (0 - 100): ";
        cin >> score; // Read the score from the user

        total += score; // Add the score to the total
        count++; // Increment the count of scores entered

        if (score >= 70) // Check if the score is passing (70 or above)
        {
            passingScores++; // Increment the count of passing scores
        }

        // Ask the user if they want to enter another score
        cout << "Enter another score? (1 for true, 0 for false): ";
        cin >> continueEntering; // Read the user's response to continue entering scores
    }

    float average = 0.0f; // Initialize the average score to 0.0

    if (count > 0)
    {
        // Calculate the average score if at least one score was entered
        average = total / count;
    }

    // Display the results to the user
    cout << "\nResults" << endl;
    cout << "-------" << endl;
    cout << "Scores Entered: " << count << endl;
    cout << "Passing Scores: " << passingScores << endl;
    cout << "Average Score: " << average << endl;

    // Determine if the class average is passing (70 or above)
    bool classPassed = average >= 70.0f;
    // Display whether the class average is passing or not
    cout << "Class Average Passing: " << classPassed << endl;

    return 0;
}
