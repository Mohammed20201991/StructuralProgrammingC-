In C++, **union** and **intersection** are common operations on arrays, vectors, or sets.

* **Union** → combines all unique elements from two sets.
* **Intersection** → keeps only the common elements.

## 1. Union Example in C++

```
#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};

    cout << "Union: ";

    // Print all elements of A
    for(int i = 0; i < 4; i++) {
        cout << A[i] << " ";
    }

    // Print elements of B only if not already in A
    for(int i = 0; i < 4; i++) {
        bool found = false;

        for(int j = 0; j < 4; j++) {
            if(B[i] == A[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            cout << B[i] << " ";
        }
    }

    return 0;
}
```

#### Output

```
Union: 1 2 3 4 5 6
```

## 2. Intersection Example in C++

```
#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};

    cout << "Intersection: ";

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(A[i] == B[j]) {
                cout << A[i] << " ";
            }
        }
    }

    return 0;
}
```

#### Output

```
Intersection: 3 4
```

### Simple Explanation

Suppose:

```
A = {1,2,3,4}
B = {3,4,5,6}
```

#### Union

All unique elements:

```txt
{1,2,3,4,5,6}
```

#### Intersection

Only common elements:

```
{3,4}
```

# Real Applications

* Student lists in two classes
* Common friends in social media
* Search engine keywords
* Database filtering
* Mathematics set operations
