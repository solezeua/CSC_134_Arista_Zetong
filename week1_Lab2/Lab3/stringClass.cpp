/*
@author:Arista Zetong
@date:06/04/2026
@purpose:Program using the C++ string class.
*/

// Include the iostream library for input and output operations.
#include <iostream>
#include <string> // require for the string class
using namespace std;

int main(){
    //declare the string variable for this program
    string verbiage, age, verbiage_end;
    verbiage = "Today I am ";
    age = "25";
    verbiage_end = " years old.";

    //print the result
    cout << verbiage << age << verbiage_end  << endl;
    return 0;
}