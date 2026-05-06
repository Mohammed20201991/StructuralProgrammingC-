#include <iostream>
using namespace std;

void printArray(int (*p)[3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int data[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printArray(data, 2);

    return 0;
}

/*
  Key Defrences 
| 1D Array  | 2D Array       |
| --------- | ---------------|
| int *p    | int (*p)[cols] |
| one index | row + column   |
| p[i]      | p[i][j]        |
*/


// Advance cout << *(*(p + i) + j); This is equivalent to: cout << p[i][j];
