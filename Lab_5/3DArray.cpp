// A 3-dimensional array in C++ is like a cube of data (rows × columns × depth).
// How it works
// arr[2][3][4] means:
// 2 layers
// each layer has 3 rows
// each row has 4 columns

// Layer 0:
// [ [1 2 3 4]
//   [5 6 7 8]
//   [9 10 11 12] ]

// Layer 1:
// [ [13 14 15 16]
//   [17 18 19 20]
//   [21 22 23 24] ]

  
#include <iostream>
using namespace std;

int main() {
    // Declare a 3D array
    int arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Access and print elements
    for (int i = 0; i < 2; i++) {        // layers
        for (int j = 0; j < 3; j++) {    // rows
            for (int k = 0; k < 4; k++) { // columns
                cout << "arr[" << i << "][" << j << "][" << k << "] = ";
                cout << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
