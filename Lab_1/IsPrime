// Level 2: Decision + Loops Combined

// 1- Check Whether a Number is Prime
// A prime number is a natural number greater than 1 that has exactly two distinct positive factors: 1 and itself
//Key Aspects of Prime Numbers:
//Definition: A whole number greater than 1 divisible only by 1 and itself.
//Examples: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, ....
//The Number 1: 1 is not considered a prime number.
//The Number 2: 2 is the smallest prime number and the only even prime number.
//Composite Numbers: Numbers greater than 1 that are not prime are called composite, as they have more than two factors
//5 is prime: Factors are 1, 5.
//9 is composite: Factors are 1, 3, 9.

// note to do later not today

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a Prime number.";
    else
        cout << n << " is NOT a Prime number.";

    return 0;
}
