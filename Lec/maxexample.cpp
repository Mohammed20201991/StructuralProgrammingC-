// Compute Maximum Item in 2D Array
#include <iostream>
using namespace std;

int main() {
    int items[2][3];
    int max;

    cout << "Enter 6 numbers:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            cin >> items[i][j];

    max = items[0][0];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            if(items[i][j] > max)
                max = items[i][j];

    cout << "Maximum = " << max;

    return 0;
}
