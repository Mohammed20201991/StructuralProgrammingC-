#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    float grade;
};

int main() {
    Student s[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter student " << i+1 << ":\n";
        cin >> s[i].name >> s[i].id >> s[i].grade;
    }

    cout << "\nStudents Data:\n";
    for(int i = 0; i < 3; i++) {
        cout << s[i].name << " " << s[i].id << " " << s[i].grade << endl;
    }

    return 0;
}
