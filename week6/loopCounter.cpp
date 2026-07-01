/*
@author: Arista Zetong
@date: 06/29/2026
@description: Program that count the number of time a loop execute and print the result.
*/
#include <iostream>
using namespace std;


int main(){
    int count = 0;

    for (int i = 0; i < 10; i++) {
        count++;
        cout << "The loop executed " << count << " times." << endl;
    }
    
    
    return 0;
}
