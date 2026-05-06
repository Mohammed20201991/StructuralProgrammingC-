//  With Pointers (Pass by Address)
#include <iostream>
using namespace std;

void change(int *x) {
    *x = 100;   // change the original value
}

int main() {
    int a = 10;

    change(&a);

    cout << a;  // Output: 100 (changed)
}
/*
- We passed the address of a
- Function accessed the real variable using *x
- So the original value changed
*/
