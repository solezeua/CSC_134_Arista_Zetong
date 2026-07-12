/*
 * Author: Arista Zetong
 * Date: 07/07/2026
 * Description: Program to display a right triangle of stars.
 */

 #include <iostream>
 using namespace std;

 int main(){
    
    //print a right triangle of stars
    for(int length = 10; length >= 0; length--){
        for(int width = 10; width > 10; width--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
 }