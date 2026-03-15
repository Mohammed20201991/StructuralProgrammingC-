// 2- Print Numbers Divisible by 3 and 5 Between 1 and 100
#include <iostream>
using namespace std;

int main() {

    cout << "Numbers divisible by 3 and 5 between 1 and 100:\n";

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
