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

// With Pointers (Clear & Powerful)
#include <iostream>
using namespace std;

void printArray(int *p, int size) {
    for(int i = 0; i < size; i++) {
        cout << *(p + i) << " ";
    }
}

int main() {
    int data[3] = {10, 20, 30};

    printArray(data, 3); // same as &data[0]
}
