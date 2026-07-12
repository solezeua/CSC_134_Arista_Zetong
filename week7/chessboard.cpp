/*
*Author:Arista Zetong
*Date: 07/08/2026
*Purpose: program that prints a chessboard pattern of asterisks and spaces using nested for-loops.
*/

#include <iostream>
using namespace std;

int main(){
    //prompt user for input
    cout << "Enter the size of the chessboard: ";
    int size;
    cin >> size;
    for(int row = 0; row < size; row++){
        for(int col = 0; col < size; col++){
            if((row + col) % 2 == 0){
                cout << " * ";
            }else{
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}