#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    float marks[5];   // Array inside struct
    float total;
    float average;
    char grade;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[100]; // Array of structs

    // Input
    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter ID: ";
        cin >> s[i].id;

        s[i].total = 0;

        cout << "Enter 5 marks:\n";
        for(int j = 0; j < 5; j++) {
            cin >> s[i].marks[j];
            s[i].total += s[i].marks[j];
        }

        s[i].average = s[i].total / 5;

        // Assign grade
        if(s[i].average >= 90)
            s[i].grade = 'A';
        else if(s[i].average >= 75)
            s[i].grade = 'B';
        else if(s[i].average >= 60)
            s[i].grade = 'C';
        else
            s[i].grade = 'F';
    }

    // Output
    cout << "\n--- Student Results ---\n";

    for(int i = 0; i < n; i++) {
        cout << "\nName: " << s[i].name;
        cout << "\nID: " << s[i].id;

        cout << "\nMarks: ";
        for(int j = 0; j < 5; j++) {
            cout << s[i].marks[j] << " ";
        }

        cout << "\nTotal: " << s[i].total;
        cout << "\nAverage: " << s[i].average;
        cout << "\nGrade: " << s[i].grade << endl;
    }

    return 0;
}
