// Students Names + 5 Marks + Average
#include <iostream>
using namespace std;

int main() {
    string names[3];
    // 5 marks + 1 average
    float marks[3][6];   

    cout << "Enter student data:\n";

    for(int i = 0; i < 3; i++) {
        cout << "Enter student name: ";
        cin >> names[i];

        for(int j = 0; j < 5; j++) {
            cout << "Enter mark " << j+1 << ": ";
            cin >> marks[i][j];
        }
    }

    // Compute average
    for(int i = 0; i < 3; i++) {
        float sum = 0;
        for(int j = 0; j < 5; j++)
            sum += marks[i][j];

        marks[i][5] = sum / 5;
    }

    cout << "\nName\tM1\tM2\tM3\tM4\tM5\tAvg\n";
    for(int i = 0; i < 3; i++) {
        cout << names[i] << "\t";
        for(int j = 0; j < 6; j++)
            cout << marks[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
