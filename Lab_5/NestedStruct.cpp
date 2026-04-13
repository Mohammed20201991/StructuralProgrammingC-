// Advanced
#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    string name;
    Date dob;
};

int main() {
    Student s1;

    s1.name = "Ali";
    s1.dob = {1, 1, 2000};

    cout << s1.name << " ";
    cout << s1.dob.day << "/" << s1.dob.month << "/" << s1.dob.year;

    return 0;
}
