/* @author: Arista Zetong
   @date: 06/29/2026
   @description: 3.program that uses an accumulator to count the number of iterations in a for-loop. You should initialize your accumulator to zero then set up a for-loop to loop a maximum of 100 times and add 1 to the accumulator each iteration through the loop. When the loop is complete you should print out the following using cout -> "The accumulator value is: xxx".
   
*/
#include <iostream>
using namespace std;

int main() {
    int accumulator = 0;

    for (int i = 1; i <= 100; i++) {
        accumulator++;
    }

    cout << "The accumulator value is: " << accumulator << endl;

    return 0;
}

 