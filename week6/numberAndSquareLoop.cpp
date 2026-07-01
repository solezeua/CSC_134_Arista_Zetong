/* @author: Arista Zetong
   @date: 06/29/2026
   @description: 5.program that sets an integer variable named minNum to the value of 0 and a variable named maxNum to 100. Implement a for-loop to print each number and its square to a simple table on the console. all 100 numbers and squares populated in the table.

*/
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize minNum and maxNum
    int minNum = 0;
    int maxNum = 100;
// display the header of the table
    cout << "Number | Number Square\n"
         << "----------------------\n";
    for (int number = minNum; number <= maxNum; number++) {
        cout << number << "\t\t" << (number * number) << endl;
    }
    return 0;
}
