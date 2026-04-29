// A lambda function in C++ is an anonymous (unnamed) function you can define directly inside your code,
// very useful for short operations without writing a full function.
/*
[capture](parameters) -> return_type {
    // body
};
*/

/*
capture     → variables from outside the lambda
parameters  → inputs
return_type → optional (compiler can deduce it)
*/

#include <iostream>
using namespace std;

int main() {
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << add(3, 4);  // Output: 7
    return 0;
}

// --------------------------------------------//
// Example 2: Lambda with Capture
/*
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    // [x] means we capture x by value
    auto print = [x]() {
        cout << x << endl;
    };

    print();  // Output: 10
    return 0;
}
*/
