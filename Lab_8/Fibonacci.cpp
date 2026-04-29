/*
Fibonacci numbers, it’s a sequence where each number is the sum of the previous two:

F(0)=0
F(1)=1
F(n)=F(n−1)+F(n−2)
*/

/*
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, .. 
*/
// int fibonacci(int n) {
//     if (n <= 1)  // Base case
//         return n;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// 1- Iterative Solution 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
// https://en.wikipedia.org/wiki/Fibonacci_sequence
