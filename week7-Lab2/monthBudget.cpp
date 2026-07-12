/* @Author: Arista Zetong
   @Date: 07/11/2026
   @Purpose: program that calculates the monthly expenses entered by the the user and compares it to the budgeted amount. It will display whether the user is over or under budget.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    //declare the variable
    double budgetedAmount;
    double expenses;
    bool continueEntering = true;
    double totalExpenses = 0.0;
    
    //prompt the user to enter the budgeted amount.
    cout << "Enter the budgeted amount: ";
    cin >> budgetedAmount;
    
    // Loop to allow the user to enter multiple expenses
    while (continueEntering) {
        cout << "Enter an expense (0 to stop): ";
        cin >> expenses;
        
        if (expenses == 0) {
            continueEntering = false;
        } else {
            totalExpenses += expenses;
        }
    }
    
    //compare the budgeted amount to the total expenses
    if(totalExpenses > budgetedAmount){
        cout << fixed << setprecision(2);
        cout << "You are over budget by $" << (totalExpenses - budgetedAmount) << endl;
    }else if(totalExpenses < budgetedAmount){
        cout << fixed << setprecision(2);
        cout << "You are under budget by $" << (budgetedAmount - totalExpenses) << endl;
    }else{
        cout << "You are on budget." << endl;
    }
    
    return 0;
}