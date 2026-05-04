// Function can return two or more values, but not directly as separate return values
// Using reference parameters (pass by reference).
#include <iostream>
using namespace std;

void calculate(int a, int b, int &sum, int &product) {
    sum = a + b;
    product = a * b;
}

int main() {
    int s, p;
    calculate(3, 4, s, p);
    cout << s << " " << p;
}
