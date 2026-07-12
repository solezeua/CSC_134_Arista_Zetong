/*@author: Arista Zetong
@date: 07/06/2026
@description: Program to display a multiplication table for numbers 1 to 10 using nested for loops.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Multiplication Table (1 to 10):" << endl;
    for(int row = 1; row <= 10; row++)
    {
        for(int col= 1; col <= 10; col++)
        {
            cout << setw(6) << row * col;
        }
        cout << endl;
    }
    return 0;
}