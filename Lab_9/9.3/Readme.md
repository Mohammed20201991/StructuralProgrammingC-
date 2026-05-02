## C++ References
A reference in C++ is an alias (another name) for an existing variable.
Once a reference is created, it refers to the same memory location as the original variable.

### Syntax
` type &reference_name = original_variable; `

### Example 1: Basic Reference
```
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x;   // ref is a reference to x

    ref = 20;       // modifies x

    cout << "x = " << x << endl;   // Output: 20
    return 0;
}
```

### Example 2: Pass by Reference (Function)
The function directly modifies the original variable.
what if function defention become `void update(int num)`

```
#include <iostream>
using namespace std;

void update(int &num) {
    num = num + 5;
}

int main() {
    int a = 10;
    update(a);

    cout << "a = " << a << endl;   // Output: 15
    return 0;
}
```
### Example 3: Swap using Reference
```
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 3, y = 7;
    swap(x, y);

    cout << x << " " << y << endl; // Output: 7 3
    return 0;
}
```

### Key Points
- Must be initialized when declared
- Cannot be changed to refer to another variable later
- No null references (unlike pointers)
- Easier and safer than pointers for many use cases
---
| Feature       | Reference     | Pointer        |
| ------------- | ------------- | -------------- |
| Syntax        | `int &r = x;` | `int *p = &x;` |
| Can be null?  |  No           |  Yes           |
| Reassignable? |  No           |  Yes           |
| Use           | Alias         | Memory address |

A reference = another name for the SAME variable (not a copy, not a pointer).
