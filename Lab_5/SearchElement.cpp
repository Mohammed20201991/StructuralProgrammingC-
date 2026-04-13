#include <iostream>
using namespace std;

int main() {
    int A[5] = {10, 20, 30, 40, 50};
    int key, found = 0;

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++) {
        if(A[i] == key) {
            cout << "Found at index " << i;
            found = 1;
            break;
        }
    }

    if(!found)
        cout << "Not Found";

    return 0;
}
