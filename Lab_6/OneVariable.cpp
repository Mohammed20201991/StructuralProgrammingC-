// Structure in One Variable
#include <iostream>
using namespace std;

// Create structure
struct {
  string name;
  int age;
  float gpa;
} student;

// Assign and print
int main() {
  student.name = "Ali";
  student.age = 21;
  student.gpa = 3.5;

  cout << "Name: " << student.name << endl;
  cout << "Age: " << student.age << endl;
  cout << "GPA: " << student.gpa << endl;

  return 0;
}
