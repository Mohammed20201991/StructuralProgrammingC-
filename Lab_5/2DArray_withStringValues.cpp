// 2D Array with String Values
#include <iostream>
using namespace std;

int main() {
    string names[2][3] = {
        {"Ali", "Omar", "Sara"},
        {"Lina", "Noor", "Zaid"}
    };

    cout << "Names:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << names[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
