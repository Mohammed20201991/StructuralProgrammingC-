/*
Advance
Ternary operators inside another ternary
Basic Idea:   condition1 ? result1 : (condition2 ? result2 : result3);

- If condition1 → return result1
- Else check condition2
- If true → result2
- Else → result3
*/

// Example 1: Find Largest of 3 Numbers
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 25, c = 15;

    int max = (a > b) ? 
                (a > c ? a : c) 
              : 
                (b > c ? b : c);

    cout << "Max = " << max;
    return 0;
}
