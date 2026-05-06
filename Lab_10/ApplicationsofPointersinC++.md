## Applications of Pointers in C++

Pointers are used in many important programming tasks.

### 1. Dynamic Memory Allocation

Pointers allow creating memory during runtime using `new`.
```
int *p = new int;

*p = 50;

cout << *p;

delete p;
// Used when the program size/data is unknown beforehand.
```
### 2. Passing Variables to Functions Efficiently

Pointers let functions modify original variables without copying data.
```
void change(int *x) {
    *x = 100;
}
//Faster and memory-efficient.
```
### 3. Arrays and Strings

Arrays are closely related to pointers.
```
int arr[3] = {10,20,30};

int *p = arr;
// Traversing arrays efficiently.
```
### 4. Swapping Variables
Pointers allow changing original values directly.
`swap(&a, &b);`

### 5. Data Structures
Pointers are essential in:
- Linked Lists
- Trees
- Graphs
- Queues
- Stacks

### 6. Returning Multiple Values from Functions
Pointers can send back more than one result.
```
void calc(int a, int b, int *sum) {
    *sum = a + b;
}
```
### 7. Fast Processing of Large Data

Instead of copying huge objects, programs pass addresses.

### 8. System Programming
Pointers are heavily used in:

- Operating systems
- Drivers
- Embedded systems

### 9. Pointer to Pointer

Used in:
- Dynamic 2D arrays
- Complex data structures

`int **pp;`
