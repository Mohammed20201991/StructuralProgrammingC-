// Without Pointers (Less Efficient Conceptually)
// Arrays already behave like pointers, but it's not explicit
#include <iostream>
using namespace std;

void printFirst(int arr[]) {
    cout << arr[0];
}

int main() {
    int data[3] = {10, 20, 30};

    printFirst(data); // works, but hidden pointer behavior
}
