# C++ Memory Management 
`Memory management` is the handling of computer memory by creating, using, and freeing memory when needed.
When a variable is created in C++, memory is automatically reserved for it. `int myNumber = 10;`
C++ automatically allocates memory to store the integer value.

## Get Memory Size

Use the `sizeof` operator to check how much memory a variable or data type uses.
```
#include <iostream>
using namespace std;

int main() {
    int age;
    float salary;
    double distance;
    char grade;

    cout << sizeof(age) << "\n";       // 4 bytes (typically)
    cout << sizeof(salary) << "\n";    // 4 bytes
    cout << sizeof(distance) << "\n";  // 8 bytes
    cout << sizeof(grade) << "\n";     // 1 byte

    return 0;
}
```
