#include <iostream>
using namespace std;

int main() {
    int A[3] = {1, 2, 3};
    int B[3] = {4, 5, 6};
    int C[6];

    // Copy A
    for(int i = 0; i < 3; i++)
        C[i] = A[i];

    // Copy B
    for(int i = 0; i < 3; i++)
        C[i + 3] = B[i];

    cout << "Merged Array:\n";
    for(int i = 0; i < 6; i++)
        cout << C[i] << " ";

    return 0;
}
