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
