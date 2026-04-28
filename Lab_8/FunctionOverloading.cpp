//Overloading: Multiple functions with the same name but with different parameters
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
