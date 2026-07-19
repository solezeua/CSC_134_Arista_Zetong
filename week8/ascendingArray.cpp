/*
@author: Arista Zetong
@date: 07/14/2026
@purpose: take the following array and manually sort it in ascending order and print the ordered list to the console. 
*/

#include <iostream>
using namespace std;

int main() {
    //declare the variable
    const int TOTAL_SIZE = 10;
    int numberList[TOTAL_SIZE] = {10,90,2,25,44,88,0,4};

    //Sorting the array in ascending order.
    for (int i = 0; i < TOTAL_SIZE - 1; i++)
    {
        for (int j = i + 1; j < TOTAL_SIZE; j++)// Comparing each element with the rest of the elements
        {
            if (numberList[i] > numberList[j])// Comparing the elements
            {
                int temp = numberList[i];// Swapping the elements
                numberList[i] = numberList[j];// Swapping the elements
                numberList[j] = temp;// Swapping the elements
            }
        }
    }

    // Printing the sorted array.
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < TOTAL_SIZE; i++){
        cout << numberList[i] << " ";// Printing the elements of the sorted array
    }
    cout << endl;

    return 0;
}
