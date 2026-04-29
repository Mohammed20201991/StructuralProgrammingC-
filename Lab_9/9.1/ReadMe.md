## C++ References & Function Passing Guide
### Overview

This guide explains:

* References in C++
* Pass by Value vs Pass by Reference
* Arrays & Structs in functions
* Variable Scope
* Practical Case Study (Student Management System)

## 1. Variable References
Concept:  A reference is an alias (another name) for an existing variable.
```
int x = 10;
int &ref = x;  // ref refers to x
```
- ✔ Both x and ref point to the same memory location
- ✔ Changing ref changes x

##  Important Rules
1. Must be initialized
```
int &r;   // ERROR

int x = 10;
int &r = x;   // correct
```
A reference must always point to something.

2. Cannot be reassigned
```
int x = 10, y = 20;
int &r = x;

r = y;  // does NOT change reference
```
This means:
`x = y;  // x becomes 20`
`r` still refers to `x`
### Example 1
```
int x = 10;
int &r = x;
cout << r;
```

### Example 2 (Modify value)
```
int x = 5;
int &r = x;
r = 20;
cout << x; // 20
```
### Example 3 (Loop with reference)
```
int arr[3] = {1,2,3};

for(int &x : arr)
    x *= 2;

for(int x : arr)
    cout << x << " ";
```

