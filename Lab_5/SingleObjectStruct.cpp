#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    float grade;
};

int main() {
    Student s1;

    cout << "Enter name, id, grade:\n";
  // ObjectName.VaraibleName(Or Property)
    cin >> s1.name >> s1.id >> s1.grade;

    cout << "\nStudent Info:\n";
    cout << s1.name << " " << s1.id << " " << s1.grade;

    return 0;
}
