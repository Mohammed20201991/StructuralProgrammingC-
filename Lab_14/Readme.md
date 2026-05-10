# Linkage in C++

**Linkage** tells the compiler whether a variable or function can be used in **other files** or only inside the **current file**.

It is related to **visibility between source files**.

### Types of Linkage

| Type             | Meaning                                         |
| ---------------- | ----------------------------------------------- |
| No Linkage       | Can only be used inside the same block/function |
| Internal Linkage | Can only be used inside the same `.cpp` file    |
| External Linkage | Can be used from other `.cpp` files             |

## 1. No Linkage

A local variable inside a function has **no linkage**.

It exists only inside that function.

```cpp
#include <iostream>
using namespace std;

void test() {
    int x = 10; // no linkage
    cout << x << endl;
}

int main() {
    test();

    // cout << x;  ERROR
}
```

## Why?

Because `x` belongs only to `test()`.

## 2. Internal Linkage

A variable or function with `static` at global scope has **internal linkage**.

It can only be used inside the same source file.

### File: main.cpp

```cpp
#include <iostream>
using namespace std;

static int number = 100; // internal linkage

int main() {
    cout << number;
}
```

### Another file: test.cpp

```cpp
#include <iostream>
using namespace std;

extern int number;

void show() {
    cout << number; // ERROR
}
```

### Why error?

Because `number` is `static`, so it is hidden inside `main.cpp`.

## 3. External Linkage

Global variables and functions normally have **external linkage**.

They can be shared between files using `extern`.

### File: main.cpp

```cpp
#include <iostream>
using namespace std;

int value = 50; // external linkage

void printValue() {
    cout << value << endl;
}
```

### File: test.cpp

```cpp
#include <iostream>
using namespace std;

extern int value;

void show() {
    cout << value << endl;
}
```

Now both files can use the same variable.

### extern Keyword

`extern` means:

> “This variable exists in another file.”

Example:

```cpp
extern int value;
```

It does not create a new variable.

It only tells the compiler to look elsewhere.

# Easy Analogy

Think about rooms in a house:

| Type             | Example                               |
| ---------------- | ------------------------------------- |
| No linkage       | Private notebook inside one room      |
| Internal linkage | Item shared only inside one apartment |
| External linkage | Item accessible by the whole building |

## Important Notes

### Local variables

```cpp
void test() {
    int a;
}
```

* No linkage
* Cannot be accessed outside function

### Global variables

```cpp
int x;
```

* External linkage by default

### Static global variables

```cpp
static int x;
```

* Internal linkage

### Small Real Example

#### math.cpp

```cpp
#include <iostream>
using namespace std;

int total = 0;

void add(int x) {
    total += x;
}
```

### main.cpp

```cpp
#include <iostream>
using namespace std;

extern int total;

void add(int);

int main() {
    add(5);
    add(3);

    cout << total;
}
```

### Output

```txt
8
```

### Summary

| Declaration            | Linkage                             |
| ---------------------- | ----------------------------------- |
| Local variable         | No linkage                          |
| Global variable        | External linkage                    |
| static global variable | Internal linkage                    |
| extern variable        | Refers to external linkage variable |
