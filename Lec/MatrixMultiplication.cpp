// Exercise 5 - Matrix Multiplication
#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 2, p = 2;

    int A[2][2], B[2][2], C[2][2];

    cout << "Enter Matrix A:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < p; j++)
            cin >> B[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < m; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    cout << "Result Matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
