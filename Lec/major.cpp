// Swap First and Second Rows (3×3 Matrix)
#include <iostream>
using namespace std;

int main() {
    // const int n = 3, m = 3;
    int n = 3, m = 3;
    int items[n][m];
    int temp;

    cout << "Enter 9 numbers:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> items[i][j];

    for(int j = 0; j < m; j++) {
        temp = items[0][j];
        items[0][j] = items[1][j];
        items[1][j] = temp;
    }

    cout << "After Swapping Row 1 and Row 2:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << items[i][j] << " ";
        cout << endl;
    }

    return 0;
}
