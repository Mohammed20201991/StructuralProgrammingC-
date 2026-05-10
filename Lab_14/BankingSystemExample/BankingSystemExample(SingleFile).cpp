/*
- Banking System Example (Single File)
- This example shows how a global bank balance can be shared and modified inside one program.
- Even though it’s one file, the variable still has external linkage by default (because it is global).
*/

#include <iostream>
using namespace std;

// Global variable (external linkage by default)
double bankBalance = 10000;

// Function to deposit money
void deposit(double amount) {
    bankBalance += amount;
}

// Function to withdraw money
void withdraw(double amount) {
    if (amount <= bankBalance) {
        bankBalance -= amount;
    } else {
        cout << "Insufficient balance!" << endl;
    }
}

// Function to display balance
void showBalance() {
    cout << "Bank Balance = " << bankBalance << endl;
}

int main() {

    showBalance();

    deposit(1500);
    showBalance();

    withdraw(2000);
    showBalance();

    withdraw(12000); // invalid case

    return 0;
}

/*   Output
Bank Balance = 10000
Bank Balance = 11500
Bank Balance = 9500
Insufficient balance!


Key Idea
- bankBalance is a global variable
- It is shared across all functions
- Any function can modify it

This is exactly how external linkage variables behave when shared across files, even though here it is shown in a single file.
*/
