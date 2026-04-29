### Case study: 
#### Student Management System 
Idea: Manage students, their grades, and calculate averages. 
Used 
* struct → Student  
* array → list of students  
* pass by reference → modify student data  
* pass by value → display data  
* references → simplify variable handling

**Structure**
``` 
struct Student { 
  string name; 
  int grades [3]; 
}
```
**Functions** 
```
void inputStudent(Student &s);          
void printStudent(Student s);           
// by reference 
// by value 
float calculateAverage(int arr[], int size); // array
``` 
What it does 
- Add students  
- Calculate average  
- Print all students 
