/* 
Ternary operator
The ternary operator (?:) in C++ is a short way to write an if-else statement in one line.
condition ? expression_if_true : expression_if_false;
- If the condition is true → first expression runs
- If false → second expression runs
*/

// Example 1: C++ Program that find max value btw (2 numbers) using Ternary Operator
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    int max = (a > b) ? a : b;

    cout << "Max = " << max;
    return 0;
}
//--------------------------------------------//
// Example 2: Even or Odd number
/*
#include <iostream>
using namespace std;

int main() {
    int num = 7;
    (num % 2 == 0) ? cout << "Even" : cout << "Odd";
    return 0;
}
*/
// Example 3: Assign Result
/*
#include <iostream>
using namespace std;

int main() {
    int marks = 45;

    string result = (marks >= 50) ? "Pass" : "Fail";

    cout << result;
    return 0;
}
*/
