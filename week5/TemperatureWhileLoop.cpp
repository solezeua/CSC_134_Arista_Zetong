/*
@author: Arista Zetong
@date:06/22/2026
@purpose:program that uses a while-loop to prompt the user for a temperature and keep prompting 
them until they enter a temperature of 212.34 degrees.Once the proper temperature has been entered, print the following message to the console "The temperature has been successfully set, thank you."
*/
#include <iostream>
using namespace std;

int main(){
   double temperature ;
    cout << "Please enter a temperature: ";
    cin >> temperature;


    while (temperature != 212.34 ){
        cout << "Please enter a temperature: ";
        cin >> temperature;
    };

    cout << "The temperature has been successfully set, thank you."<< endl;

    return 0;
}