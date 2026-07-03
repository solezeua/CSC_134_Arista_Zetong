/* @author: Arista Zetong
   @date: 06/29/2026
   @description: 8.program that asks the user how many times they would like roll a single die(integer value).
    After the user enters the number of rolls, then randomly choose a number between 1 and 6 and use a for-loop
     to simulate rolling a die. Hint: use the rand() method/function. You will want to use  
     srand(static_cast<unsigned int>(time(0))); to seed the random number generator.
*/


   #include <iostream>
   #include <cstdlib>
   #include <ctime>
using namespace std;

int main(){

    //Declare variable to hold the number of rolls
    int numRolls;

    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    cout << "how many times would you like to roll the die? ";
    cin >> numRolls;

    //Loop to simulate rolling the die
    for (int i = 1; i<= numRolls; i++){
        //Generate a random number between 1 and 6
        int roll = rand() % 6 + 1;
        cout << "Roll " << i << ": " << roll << endl;// Print the result of the roll
    }
    return 0;

}

