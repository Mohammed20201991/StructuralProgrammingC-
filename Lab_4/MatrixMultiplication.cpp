#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input size of first matrix
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    // Input size of second matrix
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Initialize result matrix to 0
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            C[i][j] = 0;

    // Matrix multiplication logic
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    cout << "Resultant Matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
