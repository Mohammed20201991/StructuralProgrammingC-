## C++ new and delete
- The new keyword lets you manage memory yourself.
- In the example below, we create memory space for an integer using new, store the value 35 in it, and print it using a pointer:

## Dynamic Memory Allocation in C++

```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 35;
    cout << *ptr;

    delete ptr;

    return 0;
}
```

| Code            | Description                      |
| --------------- | -------------------------------- |
|  new int        | Allocates memory for one integer |
|  ptr            | Stores the memory address        |
|  *ptr = 35;     | Stores the value  35  in memory  |
|  cout << *ptr;  | Prints the stored value          |
|  delete ptr;    | Frees the allocated memory       |
---

What Happens If You Forget delete?
- If you don’t use delete, the dynamically allocated memory is not released.
- The program may still run normally, but it keeps holding unused memory.
- This is called a memory leak.
- Over time, memory leaks can:
---

- increase memory usage

- slow down the program

- cause crashes in long-running applications

- So, delete is important to free memory you no longer need.

