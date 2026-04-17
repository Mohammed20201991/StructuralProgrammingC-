# Student Management System (C++)

> A console-based application developed using **structured programming in C++** to manage student records efficiently.


## Overview

The **Student Management System** is designed to perform basic operations on student data such as adding, viewing, searching, updating, and deleting records.

This project demonstrates the use of:

* Structured programming principles
* Functions and modular design
* Arrays / vectors
* File handling

---

## Features

* ➕ Add new student
* 📋 Display all students
* 🔍 Search student by ID
* ✏️ Update student information
* ❌ Delete student record
* 💾 Save and load data from file

---

## System Architecture

The system is divided into logical modules:

* **Input Module** → Takes student data from user
* **Processing Module** → Performs operations (add/search/update/delete)
* **Storage Module** → Handles file operations
* **Output Module** → Displays results

---

## Technologies Used

* **Language:** C++

* **Libraries:**

  * `<iostream>`
  * `<vector>`
  * `<fstream>`
  * `<string>`

* **Tools:**

  * GCC / MinGW / MSVC
  * VS Code / Code::Blocks

---

##  Installation & Setup

### Compile the program

```bash
g++ main.cpp -o student_system
```

### Run the program

```bash
./student_system
```

---

## Project Structure

```
StudentManagementSystem/
│
├── main.cpp            # Main program
├── student.h           # Struct definition
├── student.cpp         # Functions implementation
├── file_manager.cpp    # File handling
├── file_manager.h
└── data.txt            # Stored student records
```

---

## Data Structure

Example student structure:

```cpp
struct Student {
    int id;
    string name;
    float grade;
};
```

---

## Functions Documentation

### addStudent()

* Adds a new student to the system

### displayStudents()

* Displays all stored students

### searchStudent(int id)

* Searches for a student by ID

### updateStudent(int id)

* Updates student information

### deleteStudent(int id)

* Removes a student from the system

---

## Usage

1. Run the program
2. Choose an option from the menu:

   * Add Student
   * View Students
   * Search Student
   * Update Student
   * Delete Student
3. Enter required data
4. View results

---

## File Handling

* Data is stored in `data.txt`
* Program reads data at startup
* Saves data after every operation

---

## Error Handling

* Prevent duplicate student IDs
* Validate user input
* Handle file open/read errors

---

## Limitations

* Console-based only (no GUI)
* Basic validation
* Not optimized for large datasets

---

## Future Improvements

* Add graphical interface (GUI)
* Use database instead of file system
* Add login system (admin/user)
* Improve validation and security

---

## Concepts Applied

* Structured Programming
* Functions & Modularity
* Arrays / Vectors
* File Handling
* Basic Data Management

---

## License

This project is for **educational purposes only**.

---

## Author

* Student Name
* Course: Structural Programming in C++
* Department of AI / IT

---
