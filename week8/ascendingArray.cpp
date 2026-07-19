/*
@author: Arista Zetong
@date: 07/14/2026
@purpose: take the following array and manually sort it in ascending order and print the ordered list to the console. HINT: use loops to help you. DO NOT USE BUILT IN C++ SORTING FUNCTIONS!!
*/

#include <iostream>
using namespace std;

int main() {
    const int TOTAL_SIZE = 10;
    int numberList[TOTAL_SIZE] = {10,90,2,25,44,88,0,4};

    //Sorting the array in ascending order.
    for (int i = 0; i < TOTAL_SIZE - 1; i++)
    {
        for (int j = i + 1; j < TOTAL_SIZE; j++)//s
        {
            if (numberList[i] > numberList[j])
            {
                int temp = numberList[i];
                numberList[i] = numberList[j];
                numberList[j] = temp;
            }
        }
    }

    // Printing the sorted array.
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < TOTAL_SIZE; i++){
        cout << numberList[i] << " ";
    }
    cout << endl;

    return 0;
}
