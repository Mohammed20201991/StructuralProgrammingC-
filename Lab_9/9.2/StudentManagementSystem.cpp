#include <iostream>
using namespace std;

const int MAX = 100;

// Struct
struct Student {
    string name;
    int grades[3];
};

// Function Prototypes
void addStudent(Student students[], int &count);
void printStudent(Student s);
float calculateAverage(int grades[], int size);
void displayAll(Student students[], int count);

// Add Student
void addStudent(Student students[], int &count)
{
    if(count >= MAX){
        cout << "Storage is full!\n";
        return;
    }

    cout << "Enter student name: ";
    cin >> students[count].name;

    cout << "Enter 3 grades:\n";
    for(int i = 0; i < 3; i++){
        cin >> students[count].grades[i];
    }

    count++;
    cout << "Student added successfully!\n";
}

// Print Student
void printStudent(Student s)
{
    cout << "Name: " << s.name << endl;

    cout << "Grades: ";
    for(int i = 0; i < 3; i++){
        cout << s.grades[i] << " ";
    }

    float avg = calculateAverage(s.grades, 3);
    cout << "\nAverage: " << avg << endl;
    cout << "----------------------\n";
}

// Calculate Average
float calculateAverage(int grades[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += grades[i];
    }
    return (float)sum / size;
}

// Display All
void displayAll(Student students[], int count)
{
    if(count == 0){
        cout << "No students available!\n";
        return;
    }

    for(int i = 0; i < count; i++){
        printStudent(students[i]);
    }
}

// Main
int main()
{
    Student students[MAX];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent(students, count);
                break;
            case 2:
                displayAll(students, count);
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 3);

    return 0;
}
