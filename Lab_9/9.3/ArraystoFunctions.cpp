#include <iostream>
using namespace std;

void inc(int a[], int n){
    for(int i = 0; i < n; i++)
        a[i]++;
}

void print(int a[], int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int arr[3] = {1, 2, 3};
    inc(arr, 3);     // modify array
    print(arr, 3);   // display result

    return 0;
}

// Output
// 2 3 4

// These are equivalent:
// void inc(int a[], int n)
// void inc(int* a, int n)
