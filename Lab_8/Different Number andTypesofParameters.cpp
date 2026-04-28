#include<iostream>
using namespace std;

int add(int a, double b);
double add(double a, int b, int c);

int main() {
    cout << add(10, 2.5) << endl;
    cout << add(5.5, 6, 12);
    return 0;
}

int add(int a, double b) { 
    return a + (double)b;
}  
double add(double a, int b, int c) {
    return a + (double)b + (double)c;
}
