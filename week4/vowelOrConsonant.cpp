
/*
@author:Arista Zetong
@date:06/18/2026
@purpose: Program that accepts a single character and determine if the character is a vowel or consonant. You must account for upper and lower case characters and do not allow numeric values.
*/

// Include the iostream library for input and output operations
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // Declare a character variable
    
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    // Check if the input is a letter
    if (isalpha(letter)) {
        // Convert to lowercase for easier comparison
        letter = tolower(letter);

        // Check if the character is a vowel or a consonant
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            cout << "The character is a vowel." << endl;
        } else {
            cout << "The character is a consonant." << endl;
        }
    } else {
        cout << "Invalid input. Please enter a letter." << endl;
    }

    return 0;
}