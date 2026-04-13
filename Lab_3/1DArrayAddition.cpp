// Simple 1D Array Addition (A + B → C)
#include <iostream>
using namespace std;

int main() {
    int n = 4; // total elements (for each matrix → 4)
    
    int A[n], B[n], C[n];

    cout << "Enter elements of A:\n";
    for(int i = 0; i < n; i++)
        cin >> A[i];

    cout << "Enter elements of B:\n";
    for(int i = 0; i < n; i++)
        cin >> B[i];

    // Addition
    for(int i = 0; i < n; i++)
        C[i] = A[i] + B[i];

    cout << "Result (A + B):\n";
    for(int i = 0; i < n; i++)
        cout << C[i] << " ";

    return 0;
}
