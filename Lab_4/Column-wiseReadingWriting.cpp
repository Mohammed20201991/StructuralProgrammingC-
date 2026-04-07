#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[3][3];   // fixed maximum size

    // Reading matrix by columns
    cout << "Enter elements column by column:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cin >> A[i][j];
        }
    }

    // Printing matrix row-wise (normal view)
    cout << "\nMatrix printed row-wise:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Printing matrix column-wise
    cout << "\nMatrix printed column-wise:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
