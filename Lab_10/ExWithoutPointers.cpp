// Without Pointers (Pass by Value)
#include <iostream>
using namespace std;

void change(int x) {
    x = 100;   // only changes local copy
}

int main() {
    int a = 10;

    change(a);

    cout << a;  // Output: 10 (no change)
}
