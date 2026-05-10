#include <iostream>
using namespace std;

double bankBalance = 10000; // external linkage

void deposit(double amount) {
    bankBalance += amount;
}
