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
    // This is called aggregate initialization.
    // The compiler assigns values by position, not by name:
    s1.dob = {1, 1, 2000};
    // Safer (clearer) alternative (C++20)
    // s1.dob = {.day = 1, .month = 1, .year = 2000};
    cout << s1.name << " ";
    cout << s1.dob.day << "/" << s1.dob.month << "/" << s1.dob.year;

    return 0;
}
