/*Overloading: Multiple functions with the same name but with different parameters
Different Ways of Function Overloading
A function in C++ can be overloaded in three different ways:

By having different number of parameters.
By having different types of parameters.
By having both different number and types of parameters.
*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
// Same function with different arguments
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a = 5, b =7, c = 11;
    // Add function to add two numbers
    cout << add(a, b) << endl;
    // Add function to add three numbers
    cout << add(a, b, c);
    return 0;
}
