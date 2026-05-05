#include <iostream>
using namespace std;

void inc(int a[][3], int rows){
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < 3; j++)
            a[i][j]++;
}

void print(int a[][3], int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    inc(arr, 2);
    print(arr, 2);

    return 0;
}

/* Output 
    2 3 4
    5 6 7

Key differences from 1D array
| Feature        | 1D Array  | 2D Array                 |
| -------------- | --------- | ------------------------ |
| Function param |  int a[]  | int a[][3]               |
| Size needed    | pass  n   | pass rows, columns fixed |
| Memory         | linear    | row-by-row (row-major)   |

Logical View what we think
arr[0][0] = 1   arr[0][1] = 2   arr[0][2] = 3
arr[1][0] = 4   arr[1][1] = 5   arr[1][2] = 6
---------------------------------------------
Actual memory (Row-Major Layout)

C++ stores arrays row by row in contiguous memory:
Address     Value
--------    -----
100         1   ← arr[0][0]
104         2   ← arr[0][1]
108         3   ← arr[0][2]
112         4   ← arr[1][0]
116         5   ← arr[1][1]
120         6   ← arr[1][2]
Each int takes 4 bytes (example)  Rows are stored one after another
-------------------------------------------------------------------
Visual memory diagram
arr
 │
 ▼
+-----+-----+-----+-----+-----+-----+
|  1  |  2  |  3  |  4  |  5  |  6  |
+-----+-----+-----+-----+-----+-----+
 100   104   108   112   116   120

*/
