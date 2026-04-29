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
## 2. Pass by Value
Concept
* A copy of the variable is passed
* Original value is NOT affected
### Examples
```
void f(int x){
    x = 100;
}
```

```
int sum(int a, int b){
    return a + b;
}
```

```
void inc(int x){
    x++;
}
```
Original variable remains unchanged

## 3. Pass by Reference
Concept
- Pass the actual variable
- Changes affect the original

### Examples (Modify value)
```
void f(int &x){
    x = 100;
}
```
Swap

```
void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
```
Increment
```
void inc(int &x){
    x++;
}
```
## 4. Passing Arrays to Functions
Key Idea
- Arrays are passed as reference (pointer)
- Changes affect original array
- Must pass size manually

### Examples(Print array)
```
void print(int a[], int n){
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}
```
Sum
```
int sum(int a[], int n){
    int s = 0;
    for(int i=0;i<n;i++)
        s += a[i];
    return s;
}
```
Modify array
```
void inc(int a[], int n){
    for(int i=0;i<n;i++)
        a[i]++;
}
```
## 5. Passing Struct to Functions
Struct Definition
```
struct Student {
    string name;
    int age;
};
```
### Example  (Pass by value)
```
void print(Student s){
    cout << s.name << " " << s.age;
}
```
### Example  (Pass by reference)
```
void changeRef(Student &s){
    s.age = 50;
}
```

