/* Name:Arista zetong
   @date: 06/29/2026
   @description:  6.program that initializes two variables named sumOp and adder, let sumOp equal 0 and adder equal 10.
    Create a for-loop that loops 50 times and sums the loop counter(index) and the adder variable. Each iteration 
    through the loop, you should print the sumOp variable that holds the value your summed up.
*/
#include <iostream>
using namespace std;

int main() {
    int sumOp = 0;
    int adder = 10;

    for (int i = 1; i <= 50; i++) {
        sumOp += i + adder;
        cout << "The sum of iteration " << i << " is: " << sumOp << endl;
    }

    return 0;
}
