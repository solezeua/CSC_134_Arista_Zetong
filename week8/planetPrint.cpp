/*
@author: Arista Zetong
@date: 07/15/2026
@purpose: Using a for-loop and arrays, you should print all 8 planets and the dwarf planet(Pluto) to the console.
*/

#include <iostream>
using namespace std;

int main() {
    //declare the variable
    const int PLANETS = 9;
    
    //initialize the array with the names of the planets and Pluto
    string planets[PLANETS] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto(dwarf planet)"};
    
    //use a for-loop to print the names of the planets and Pluto
    for (int count = 0; count < PLANETS; count++) {
        cout << planets[count] << endl; // Print the name of the planet at the current index
    }

    return 0;
}