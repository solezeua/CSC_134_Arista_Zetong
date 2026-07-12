/*@author: Arista Zetong
@date: 07/06/2026
@description: Program to display a multiplication table for numbers 1 to 10 using nested for loops.
*/

#include <iostream>
using namespace std;

int main(){
    int vertical = 0;
    int horizontal = 0;

    cout << "Multiplication Table (1 to 10):" << endl;
    for(int x = 1; x <= 10; x++)
    {
        for(int y= 1; y<= 10; y++)
        {
            cout << x << "\t " << y << "\t " << x * y << endl;
        }
    }
    return 0;
}