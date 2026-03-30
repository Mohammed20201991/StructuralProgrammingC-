// Replace Row 1 with Row 2 (Swap Rows)
#include <iostream>
using namespace std;

int main() {
    int items[2][3];
    int temp;

    cout << "Enter 6 numbers:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            cin >> items[i][j];

    for(int j = 0; j < 3; j++) {
        temp = items[0][j];
        items[0][j] = items[1][j];
        items[1][j] = temp;
    }

    cout << "After Swapping Rows:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++)
            cout << items[i][j] << " ";
        cout << endl;
    }

    return 0;
}
