### Example 1: Struct with Array Members (Student Marks System)
Use a struct that contains:

Normal variables
An array inside the struct

Problem

Create a program to:

Store student information
Each student has:
Name
ID
Array of marks (for 5 subjects)
Calculate:
Total marks
Average
Grade
##### Example Input
```
Enter number of students: 2

Student 1
Enter name: Ali
Enter ID: 101
Enter 5 marks:
80 85 90 75 88

Student 2
Enter name: Sara
Enter ID: 102
Enter 5 marks:
95 92 90 93 94
```

#### Example Output
```
--- Student Results ---

Name: Ali
ID: 101
Marks: 80 85 90 75 88
Total: 418
Average: 83.6
Grade: B

Name: Sara
ID: 102
Marks: 95 92 90 93 94
Total: 464
Average: 92.8
Grade: A
```

```
float marks[5]; → Array inside struct
Student s[100]; → Array of structures
Nested loops:
Outer loop → students
Inner loop → marks
```
### Task:
🔹 Find highest average student
🔹 Search student by ID
🔹 Sort students by average
🔹 Allow variable number of subjects


