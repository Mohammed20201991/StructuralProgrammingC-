#include <iostream>
using namespace std;

int add(int a, int b);
double add(double a, double b);

int main() {
    cout << add(10, 2) << endl;
    cout << add(5.3, 6.2);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
double add (double a, double b) {
    return a + b;
}
