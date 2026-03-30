// Exercise 2 — Transpose Matrix
#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 3;
    int a[2][3];

    cout << "Enter 6 numbers:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    cout << "Transpose:\n";
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
